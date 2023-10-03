//? given N string and Q queries in each query you are given a string print frequency of the string 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    int q;
    cout<<"enter the number of queries ";cin>>q;
    while(q--) 
    {
        string s;
        cout<<"enter string : ";cin>>s;
        m[s]++;
    }
    for(auto &it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
