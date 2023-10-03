#include <bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int> adj[],int vis[]){
    vis[node] = 1;
    cout<<node<<" ";
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis);
        }
    }
}
int main(){
    int n;
    cout<<"enter the number of vertices : ";cin>>n;
    int m;
    cout<<"enter the number of edges : ";cin>>m;
    vector<int> adj[n+1];
    int s,d;
    for(int i =0 ;i<m;i++){
        cout<<"enter the source : ";cin>>s;
        cout<<"enter the destination : ";cin>>d;
        adj[s].push_back(d);
        adj[d].push_back(s);
    }

    int vis[n+1] = {0};
    dfs(1,adj,vis);
    return 0;
}
