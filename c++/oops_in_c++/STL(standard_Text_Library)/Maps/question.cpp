//? given a task to store all the unique strings from the user and calculate its frequency in lexicographical order 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m;
    int n;
    cout<<"enter the number of strings : ";cin>>n;
    for(int i =0;i<n;i++)
    {
        string s; 
        cout<<"enter the string : ";cin>>s;
        m[s]++;
    }
    // cout<<"string"<<" "<<"frequency"<<endl;
    for(auto &it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}
