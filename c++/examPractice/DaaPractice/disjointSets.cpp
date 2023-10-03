#include <bits/stdc++.h>
using namespace std;
class DisjointSets{
    vector<int> rank;
    vector<int> parent;
    vector<int> size;
    public : 
        DisjointSets(int n){
            rank.resize(n+1,0);
            parent.resize(n+1);
            size.resize(n+1,1);
            for(int i =0;i<n+1;i++) {
                parent[i] = i;
            }
        }
        int findUltimateParent(int node){
            if(node == parent[node])
                return node;
            return parent[node] = findUltimateParent(parent[node]);
        }
        void unionByRank(int u,int v){
            int ult_u = findUltimateParent(u);
            int ult_v = findUltimateParent(v);
            if(ult_u == ult_v)  return;
            else if(rank[ult_u] < rank[ult_v])
                parent[ult_u] = ult_v;
            else if(rank[ult_u] > rank[ult_v])
                parent[ult_v] = ult_u;
            else{
                parent[ult_u] = ult_v;
                rank[ult_v]++;
            }
        }
        void unionBySize(int u,int v){
            int ult_u = findUltimateParent(u);
            int ult_v = findUltimateParent(v);
            if(ult_u == ult_v) return;
            if(size[ult_u] < size[ult_v]){
                parent[ult_u] = ult_v;
                size[ult_v] += size[ult_u];
            }
            else{
                parent[ult_v] = ult_u;
                size[ult_u] += size[ult_v];
            }
        }
};
int main()
{
    DisjointSets ds(7);
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);

    if(ds.findUltimateParent(3) == ds.findUltimateParent(7)) cout<<"true";
    else cout<<"false";
    cout<<endl;
    ds.unionByRank(3,7);
    if(ds.findUltimateParent(3) == ds.findUltimateParent(7)) cout<<"true";
    else cout<<"false";

    return 0;
}
