//*maps implement on the principle of red black tree
#include <bits/stdc++.h>
using namespace std;
void printData(map<int,string> &m)
{
    for(auto &it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }cout<<endl;
}
int main()
{
    map<int,string> m;
    int n;
    cout<<"enter the values you want to insert in the map : ";cin>>n;
    cout<<"creating the mapping"<<endl;
    for(int i =0;i<n;i++)
    {
        int val;
        string key;
        cout<<"enter the value : ";cin>>val;
        cout<<"enter the key : ";cin>>key;
        m.insert({val,key});
    }
    printData(m);
    auto it = m.find(2); //^time complexity for find operation is  O(log(N))
    if(it != m.end())
        cout<<it->second;
    else
        cout<<"NOT FOUND!!"<<endl;
    
    m.erase(3);  //^ O(log(N))
    printData(m);
    return 0;
}
