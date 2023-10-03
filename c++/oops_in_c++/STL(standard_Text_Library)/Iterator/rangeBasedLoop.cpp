#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements : ";cin>>n;
    vector<int> v;
    cout<<"enter the values of the vector : "<<endl;
    for(int i =0;i<n;i++)
    {
        int a; 
        cin>>a;
        v.push_back(a);
    }

    // range based loop 
    for(auto &value : v)
    {
        cout<<value<<" ";
        value ++;
    }cout<<endl;
    
    for(auto value : v)
    {
        cout<<value<<" ";
    }

    return 0;
}
