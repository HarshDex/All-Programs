#include <bits/stdc++.h>
using namespace std;
void printData(unordered_map<int,int> &m) // implemented using hashing 
{
    for(auto &it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main()
{
    unordered_map<int,int> m;
    int n;
    cout<<"enter the number of elements: ";cin>>n;
    cout<<"enter the element in map : "<<endl;
    for(int i =0;i<n;i++)
    {
        int a,b;
        cout<<"enter the value : ";cin>>a;
        cout<<"enter the key : ";cin>>b;
        m.insert(make_pair(a,b));
    }
    printData(m);

    return 0;
}
