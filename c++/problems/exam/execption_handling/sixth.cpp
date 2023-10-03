#include <bits/stdc++.h>
using namespace std;
void printData(vector<int> v)
{
    for(auto &it : v)
    {
        cout<<it<<" ";
    }
}
int main()
{
    vector<int> v;
    int n;
    cout<<"enter the number of elemetns : ";cin>>n;

    for(int i =0;i<n;i++)
    {
        cin>>v[i];
    }

    v.pop_back();

    list<int> l = {1,2,3,4,5};
    l.pop_front();
}
