//iterators arte the pointers which points to the element of the containers
// .begin = points to first element of the container
// .end = points to last element of the container
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of element : ";
    cin>>n;
    vector<int> v;
    for(int i =0;i<n;i++)
    {
        int a ;
        cout<<"value : ";cin>>a;
        v.push_back(a);
    }

    vector<int> :: iterator it = v.begin();
    cout<<*it<<endl;
    for(it = v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }cout<<endl;

    //iteratros for vector in pair 
    vector<pair<int,int>> m ={{1,1},{2,1},{5,2},{3,2}};
    vector<pair<int,int>>:: iterator pt;
    // for(int i =0;i<n;i++)
    // {
    //     cin>>pt->first;
    //     cin>>pt->second;
    //     pt++;
    // }
    cout<<"printing the data : "<<endl;
    for(pt = m.begin();pt != m.end();pt++)
    {
        cout<<"("<<pt->first<<" "<<pt->second<<"),";
    }

    return 0;
}

