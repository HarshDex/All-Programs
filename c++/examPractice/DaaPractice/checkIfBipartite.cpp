#include <bits/stdc++.h>
using namespace std;
bool bfs(int start,vector<int> adj[],int color[]){
    queue<int> q;
    color[start] = 0;
    q.push(start);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it : adj[node]){
            if(color[it] == -1){
                color[it] = !color[node];
                q.push(it);
            }
            else if(color[it] == color[node]) return false;
        }
    }
    return true;
}
bool ifBipartite(vector<int> adj[],int n){
    int color[n] = {-1};
    for(int i =0;i<n;i++){
        if(color[i] == -1){
            if(bfs(i,adj,color) == false)
                return false;
        }
    }
    return true;
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

    if(ifBipartite(adj,n) == true) cout<<"yes it is bipartite"<<endl;
    else cout<<"no, it is not bipartite"<<endl;

    return 0;
}
