#include <bits/stdc++.h>
using namespace std;
vector<pair<vector<int>,int>> shortestPath(vector<pair<int,int>> adj[],int n,int m){
    vector<int> dis(n+1,1e9);
    vector<int> parent(n+1);
    for(int i = 0;i<n+1;i++) parent[i] = i;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,0});
    dis[0] = 0;
    while(pq.empty()){
        int node = pq.top().first;
        int wt = pq.top().second;
        pq.pop();
        for(auto it : adj[node]){
            int v = it.first;
            int weight = it.second;
            int twt = weight + wt;
            if(twt < dis[v]){
                dis[v] = twt;
                pq.push({v,twt});
                parent[v] = node;
            }
        }
    }
    vector<pair<vector<int>,int>> ans;
    
    for(int i =2;i<n;i++){
        vector<int> temp;
        int node = i;
        while(parent[node] != node){
            temp.push_back(node);
            node = parent[node];
        }
        temp.push_back(1);
        reverse(temp.begin(),temp.end());
        ans.push_back({temp,dis[i]});
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter total number of vertices : ";cin>>n;
    int m;
    cout<<"enter the total number of routes : ";cin>>m;
    int src;
    int dst;
    int cost;
    vector<pair<int,int>> adj[n];
    for(int i =0;i<m;i++){
        cout<<"enter source : ";cin>>src;
        cout<<"enter destination : ";cin>>dst;
        cout<<"enter cost : ";cin>>cost;
        adj[src].push_back({dst,cost});
    }

    vector<pair<vector<int>,int>> ans = shortestPath(adj,n,m);
    for(auto it : ans){
        int dis = it.second;
        for(auto m : it.first) cout<<m<<" ";
        cout<<dis<<" : ";
        cout<<endl;
    }


    return 0;
}
