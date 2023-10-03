#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cout<<"enter the number of elements : ";cin>>n;
    cout<<"enter the value : ";
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    for(auto it : s){
        cout<<it<<" ";
    }cout<<endl;
    cout<<"enter the number which you want to find : ";cin>>n;
    auto d = s.find(n);
    if(d != s.end()){
        cout<<"found :"<<(*d)<<endl;
    }
    else cout<<"not found";
    return 0;
}
