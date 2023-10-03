#include <bits/stdc++.h>
using namespace std;
void bfs(vector<int> adj[],int V,int vis[]){
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    while(!q.empty()){
        int node = q.front();
        cout<<node<<" ";
        q.pop();
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
    cout<<"enter the number of vertices : ";
    cin>>n;

    int e;
    cout<<"enter the number of edges : ";
    cin>>e;
    vector<int> adj[n];
    for(int i =0;i<e;i++){
        int src;
        int dest;
        cout<<"enter the souce : ";
        cin>>src;
        cout<<"enter the destination : ";cin>>dest;
        adj[src].push_back(dest);
        adj[dest].push_back(src);
    }
    int vis[n] = {0};
    bfs(adj,n,vis);
    return 0;
}
