#include <bits/stdc++.h>
using namespace std;
class DisjointSets{
    vector<int> parent,rank;
    public: 
        DisjointSets(int n){
            rank.resize(n+1,0);
            parent.resize(n+1);
            for(int i =0;i<n+1;i++) parent[i] = i;
        }

        int findUlt(int node){
            if(parent[node] == node) return node;
            return parent[node] = findUlt(parent[node]);
        }
        void unionByRank(int u,int v){
            int ult_u = findUlt(u);
            int ult_v = findUlt(v);
            if(ult_u == ult_v) return;
            else if(rank[ult_u] < rank[ult_v]){
                parent[ult_u] = ult_v;
                rank[ult_v]++;
            }
            else{
                parent[ult_v] = ult_u;
                rank[ult_u]++;
            }
        }
};


int minRoads(vector<pair<int,int>> kingdom[],int n){
    vector<pair<int,pair<int,int>>> adj;
    for(int i =0;i<n;i++){
        for(auto it : kingdom[i]){
            int adjNode = it.first;
            int weight = it.second;
            int node = i;
            adj.push_back({weight,{node,adjNode}});
        }
    }
        

    int sum = 0;
    int totalEdges = 0;

    sort(adj.begin(),adj.end());
    DisjointSets ds(n);

    for(auto it : adj){
        int wt = it.first;
        int u = it.second.first;
        int v = it.second.second;
        if(ds.findUlt(u) != ds.findUlt(v)){
            sum += wt;
            ds.unionByRank(u,v);
        }
        else totalEdges++;
    }
    return totalEdges;
}

int main(){
    int n;
    cout<<"enter the number of cities : ";
    cin>>n;

    int r;
    cout<<"enter the total number of routes : ";cin>>r;

    vector<pair<int,int>> kingdom[n];
    int src;
    int dst;
    int wt;
    for(int i =0;i<r;i++){
        cout<<"enter source : ";
        cin>>src;
        cout<<"enter destination : ";
        cin>>dst;
        cout<<"enter cost : ";
        cin>>wt;
        kingdom[src].push_back({dst,wt});
        kingdom[dst].push_back({src,wt});
    }

    int ans = minRoads(kingdom,n);

    cout<<"number of roads he needs to destroy : "<<ans;
    return 0;
}
