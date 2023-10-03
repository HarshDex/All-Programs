//*It is implemented using hashing table 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,string> m;
    int n;
    cout<<"enter the number of elements in the map : ";cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        string key;
        cout<<"enter the value : ";cin>>val;
        cout<<"enter the key : ";cin>>key;
        m.insert(make_pair(val,key));
    }
    for(auto &it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
