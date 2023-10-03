#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of nodes : ";
    cin>>n;

    vector<vector<int>> adj(n,vector<int>(n,0));
    int e;
    cout<<"enter the number edges : ";
    cin>>e;
    for(int i =0;i<e;i++){
        int src;cout<<"enter the source : ";cin>>src;
        int dst;cout<<"enter the destination : ";cin>>dst;  
        adj[src][dst] = 1;
    }
    //first converting it into an adjcency list
    vector<int> adjList[n];
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            if(adj[i][j] == 1)
                adjList[i].push_back(j);
                adjList[j].push_back(i);
        }
    }
    int color[] = {-1};
    queue<int> q;
    q.push(0);
    color[0] = 0;
    int flag = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it : adj[node]){
            if(color[it] == -1){
                q.push(it);
                color[it] = !color[node];
            }
            else if(color[it] == color[node]){
                int flag = 1;
                printf("no,it is not bipartite");
                break;
            }
        }
    }
    if(flag == 0) printf("yes,it is bipartite");
    return 0;
}
