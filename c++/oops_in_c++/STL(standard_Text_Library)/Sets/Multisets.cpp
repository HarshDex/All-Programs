#include <bits/stdc++.h>
using namespace std;
void printData(multiset<string> &s)
{
    for(auto &it : s)
    {   
        cout<<it<<" ";
    }
}
int main()
{
    multiset<string> s;
    
    int n;
    cout<<"enter the number of string : ";cin>>n;

    for(int i=0;i<n;i++)
    {
        string str;
        cout<<"enter the string : ";cin>>str;
        s.insert(str);
    }

    cout<<"printing the string " <<endl;

    // if i want to delete the element from the set 
    auto it= s.find("abc");
    if( it != s.end())
    {
        s.erase(it);
    }

    s.erase("bcd");

    printData(s);
    return 0;
}
