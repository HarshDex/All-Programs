#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of element in the stack : ";cin>>n;

    cout<<"enter the value in the stack : "<<endl;
    stack<int> sp;

    for(int i = 0;i<n;i++){
        int a;
        cout<<"enter element : ";cin>>a;
        sp.push(a);
    }

    cout<<"deleting the middle element : "<<endl;

    int mid;
    // cout<<sp.size()<<endl;

    if(sp.size()%2 == 0)
        mid = sp.size()/2;
    else 
        mid = (sp.size()/2) + 1;
    
    cout<<mid<<endl;

    vector<int> v;

    for(int i =1;i<mid;i++){
        v.push_back(sp.top());
        sp.pop();
    }

    //cout<<sp.top()<<endl;

    sp.pop();

    //cout<<sp.top()<<endl;

    reverse(v.begin(),v.end());

    for(int i =0;i<v.size();i++)
        sp.push(v[i]);

    cout<<"now printing the valuse of the stack : ";
    while(!sp.empty())
    {
        cout<<sp.top()<<" ";
        sp.pop();
    }

    return 0;
}