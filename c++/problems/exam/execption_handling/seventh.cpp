#include <bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int n;
    set<int> s;
    cout<<"enter the number ofelemtnes : ";cin>>n;
    for(int i =0;i<n;i++)
    {
        int a;
        cout<<"enter element : ";cin>>a;
        s.insert(a);
    }
    set<int> :: iterator it;
    for(it = s.begin();it != s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
