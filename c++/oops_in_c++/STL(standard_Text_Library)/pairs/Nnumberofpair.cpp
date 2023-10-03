#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of pair : ";cin>>n;

    vector<pair<int,int>> v;
    for(int i =0;i<n;i++)
    {
        int f;
        int s;
        cout<<"enter the value of first : ";cin>>f;
        cout<<"enter the value of second : ";cin>>s;
        v.push_back(make_pair(f,s));
    }

    // for(int i =0;i<n;i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }   
    for(auto val : v)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }

    return 0;
}
