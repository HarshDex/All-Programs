#include <bits/stdc++.h>
using namespace std;
void printData(set<string> &s)
{
    for(auto &it : s)
    {   
        cout<<it<<" ";
    }
}
int main()
{
    set<string> s;
    
    int n;
    cout<<"enter the number of string : ";cin>>n;

    for(int i=0;i<n;i++)
    {
        string str;
        cout<<"enter the string : ";cin>>str;
        s.insert(str);
    }

    cout<<"printing the string " <<endl;
    printData(s);

    return 0;
}
