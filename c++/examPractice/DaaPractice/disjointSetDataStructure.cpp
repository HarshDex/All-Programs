#include <bits/stdc++.h>
using namespace std;
class DisjointSet{
    vector<int> parent;
    vector<int> size;
    public:
    DisjointSet(int n){
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i =0;i<n+1;i++) parent[i] = i;
    }
    int findUltParent(int node){
        if(node == parent[node])
            return node;
        return parent[node] = findUltParent(node);
    }
    void unionBySize(int u,int v){
        int ult_u = findUltParent(u);
        int ult_v = findUltParent(v);
        if(ult_u == ult_v)return;
        else if(size[ult_u] < size[ult_v])parent[ult_u] = ult_v;
        else if(size[ult_u] > size[ult_v]) parent[ult_v] = ult_u;
        else{
            parent[ult_v] = ult_u;
            size[ult_u] += size[ult_v];
        }
    }
};
int main()
{
    DisjointSet ds(7);
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(5,6);
    ds.unionBySize(6,7);
    if(ds.findUltParent(1) == ds.findUltParent(7)) cout<<"true";
    else false;
    return 0;
}
