#include <bits/stdc++.h>
using namespace std;
void printData(map<int,string> &m){
    for(auto &it : m){
        cout<<it.first<<"  "<<it.second<<endl;
    }
}
int main()
{
    map<int,string> m;
    m.insert(make_pair(1,"hello"));
    
    m.insert(make_pair(2,"my"));
    m.insert(make_pair(3,"name"));
    m.insert(make_pair(4,"is"));
    m.insert(make_pair(5,"harsh"));
    m.insert(make_pair(6,"vardhan"));
    m.insert(make_pair(7,"shah"));
    
    cout<<"printing the map : "<<endl;
    printData(m);

    //we can also perform find operation on the mapbut it takes O(log(n)) time complexity
    cout<<"we can also perform find operation on the maps "<<endl;
    auto it  = m.find(1);
    cout<<(*it).first<<" "<<(*it).second<<endl;

    int f;
    cout<<"enter the number which you want to find : ";cin>>f;
    it = m.find(f);
    if(it== m.end())
        cout<<"no such key exisit"<<endl;
    else
        cout<<(*it).first<<" "<<(*it).second<<endl;
    return 0;
}
