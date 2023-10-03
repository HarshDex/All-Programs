#include <bits/stdc++.h>
using namespace std;
bool detectCycle(int i,vector<int> adj[],int n,vector<int> &vis){
    queue<pair<int,int>> q;
    q.push({i,-1});
    vis[i] = 1;
    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push({it,node});
            }
            else if(parent != it) return false;
        }
    }
    return true;
}
bool cycleDetect(vector<int> adj[],int n){
    vector<int> vis(n);
    for(int i =0;i<n;i++) vis[i] = 0;
    for(int i =0;i<n;i++){
        if(!vis[i]){
            if(detectCycle(i,adj,n,vis) == true) return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"enter the number of vertices : ";cin>>n;
    int e;
    cout<<"enter the number of edges : ";cin>>e;

    vector<int> adj[n];
    cout<<"enter the graph : "<<endl;
    int src;int dst;
    for(int i =0;i<e;i++){
        cout<<"enter source : ";cin>>src;
        cout<<"enter destination : ";cin>>dst;
        adj[src].push_back(dst);
        adj[dst].push_back(src);
    }cout<<endl;

    cout<<"adj list : "<<endl;
    for(int i =0;i<n;i++){
        cout<<i<<" -> ";
        for(auto it : adj[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }


    if(cycleDetect(adj,n) == true)  cout<<"yes,there is an cycle";
    else cout<<"no,there is no cycle present";

    return 0;
}
