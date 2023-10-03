#include<bits/stdc++.h>
using namespace std;
bool bfs(vector<int> adj[],int *vis,int start,int dest){
    queue<int> q;
    q.push(start);
    vis[start] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return vis[dest];
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
    }cout<<endl;

    cout<<"adj list : "<<endl;
    for(int i =0;i<n;i++){
        cout<<i<<"->";
        for(auto it : adj[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    int vis[n] = {0};
     
    int start;
    cout<<"enter starting point : ";cin>>start;
    int dest;
    cout<<"enter the destination : ";cin>>dest;

    if(bfs(adj,vis,start,dest) == true)
        cout<<"path exist";
    else 
        cout<<"path not exsist";
}
