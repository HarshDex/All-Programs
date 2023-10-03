#include <bits/stdc++.h>
using namespace std;
void bfs(int V,vector<int> adj[]){
    int vis[V] = {0};
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
}
int main()
{
    int n;
    cout<<"enter the number of vertices : ";cin>>n;
    int m;
    cout<<"enter the number of edges : ";cin>>m;
    vector<int> adj[n+1];
    int u;
    int v;
    for(int i =0;i<n;i++){
        cout<<"enter the vertex : ";cin>>v;
        cout<<"enter the edge : ";cin>>u;
        adj[u].push_back(v);
    }
    return 0;
}
