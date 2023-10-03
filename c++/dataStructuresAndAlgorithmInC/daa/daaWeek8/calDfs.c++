#include <bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int> adj[],vector<int> &vis,vector<int> &ans){
    vis[node] = 1;
    ans.push_back(node);
    for(auto it : adj[node]){
        if(vis[it] != 1){
            dfs(it,adj,vis,ans);
        }
    }
}
int main(){
    int n;
    cout<<"enter the number of nodes : ";
    cin>>n;
    int m;
    cout<<"enter the number of edges : ";
    cin>>m;
    int src, dst;
    vector<int> adj[n];
    for(int i= 0;i<m;i++){
        cin>>src;
        cin>>dst;
        adj[src].push_back(dst);
        adj[dst].push_back(src);
    }
    vector<int> ans;
    vector<int> vis(n,0);

    dfs(0,adj,vis,ans);
    for(auto it : ans) {
        cout<<it<<" ";
    }
    return 0;
}
