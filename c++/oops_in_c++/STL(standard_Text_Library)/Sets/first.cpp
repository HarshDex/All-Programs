#include <bits/stdc++.h>
using namespace std;
void printData(set<int> &s)
{
    // auto &it = s;
    cout<<"value : ";
    for(auto it = s.begin();it!= s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    cout<<"value : ";
    for(int value : s)
    {
        cout<<value<<" ";
    }cout<<endl;
}
int main()
{
    int n;
    cout<<"enter the number of element you want to insert in the set : ";cin>>n;

    set<int> s;
    for(int i =0;i<n;i++)
    {
        int a;
        cout<<"enter the key : ";cin>>a;
        s.insert(a);
    }

    printData(s);

    cout<<"implementing functions and algorithms in sets : "<<endl;

    cout<<"finding values : "<<endl;
    auto m = s.find(4);
    if(m == s.end())
        cout<<"not found!!"<<endl;
    else
        cout<<"found value : "<<*m<<endl;

    cout<<"erasing a value : "<<endl;
    s.erase(4);
    printData(s);
    
    cout<<"inserting a new value in the set : "<<endl;
    s.insert(4);
    printData(s);
    return 0;
}
