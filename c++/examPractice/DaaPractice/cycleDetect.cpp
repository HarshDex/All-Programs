//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int> adj[],int *vis,stack<int> &sp){
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,sp);
        }
    }
    sp.push(node);
}
//Function to return list containing vertices in Topological order. 
vector<int> topoSort(int V, vector<int> adj[]) 
{
    // code here
    int vis[V] = {0};
    vector<int> ans;
    stack<int> sp;
    for(int i =0;i<V;i++){
        if(!vis[i]){
            dfs(i,adj,vis,sp);
        }
    }
    while(!sp.empty()){
        ans.push_back(sp.top());
        sp.pop();
    }
    return ans;
}

int main() {
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

    vector<int> ans = topoSort(n,adj);
    if(ans.size() != n) cout<<"cycle not found"<<endl;
    else if(ans.size() == n) cout<<"cycle found"<<endl;

    return 0;
}
// } Driver Code Ends