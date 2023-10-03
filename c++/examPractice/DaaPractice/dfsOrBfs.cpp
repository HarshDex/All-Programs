#include <bits/stdc++.h>
using namespace std;
void bfs(int src,vector<int> adj[],int v){
    vector<int> vis(v,0);vis[src] = 1;
    queue<int> q;q.push(src);
    while(!q.empty()){
        int node = q.front();q.pop();
        cout<<node<<" ";
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
}
void dfs(int node,vector<int> adj[],int *vis){
    vis[node] = 1;
    cout<<node<<" ";
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis);
        }
    }
}
int main()
{
    int v;
    cout<<"enter the number of vertices : ";cin>>v;
    int e;
    cout<<"enter the number of edges : ";cin>>e;
    cout<<"enter the graph : "<<endl;
    vector<int> adj[v];
    for(int i =0;i<e;i++){
        int src;int dst;
        cout<<"enter the source : ";cin>>src;
        cout<<"enter the destination : ";cin>>dst;
        adj[src].push_back(dst);
        adj[dst].push_back(src);
    }
    int vis[v] = {0};
    dfs(0,adj,vis);cout<<endl;
    bfs(0,adj,v);return 0;
}
