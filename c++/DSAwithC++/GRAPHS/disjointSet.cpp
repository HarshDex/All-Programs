#include <bits/stdc++.h>
using namespace std;
class DisjointSet{
    vector<int> rank,parent;
    public:
        DisjointSet(int n){
            rank.resize(n+1,0);
            parent.resize(n+1);
            for(int i =0;i<n+1;i++) parent[i] = i;
        }
        int findUltParent(int node){
            if(parent[node] == node)
                return node;
            return parent[node] = findUltParent(parent[node]);
        }
        void unionByRank(int u,int v){
            int ult_u = findUltParent(u);
            int ult_v = findUltParent(v);
            if(ult_u == ult_v)  return;
            if(rank[ult_u] < rank[ult_v]) parent[ult_u] = ult_v;
            else if( rank[ult_v] < rank[ult_u]) parent[ult_v] = ult_u;
            else{
                parent[ult_v] = ult_u;
                rank[ult_u]++;
            }
        }
};
int main()
{
    int n = 6;
    DisjointSet ds(6);
    ds.unionByRank(1,2);
    ds.unionByRank(2,3);
    ds.unionByRank(3,4);
    // ds.unionByRank(4,5);
    ds.unionByRank(5,6);
    if(ds.findUltParent(2) == ds.findUltParent(5))cout<<"true";
    else cout<<"false";
    return 0;
}
