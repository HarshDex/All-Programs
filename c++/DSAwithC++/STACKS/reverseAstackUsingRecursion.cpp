#include <bits/stdc++.h>
using namespace std;
void insertAtbottom(stack<int> &s,int key){
    if(s.empty()){
        s.push(key);
        return;
    }

    int val = s.top();
    s.pop();

    insertAtbottom(s,key);
    s.push(val);
}
void reversed(stack<int> &s)
{
    if(s.empty())
        return;

    int t = s.top();
    s.pop();

    reversed(s);
    insertAtbottom(s,t);
}

int main()
{
    int n;
    cout<<"enter the number of element you want to push in the stack : ";cin>>n;
    
    stack<int> s;
    cout<<"enter the elements : ";
    for(int i =0;i<n;i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }
    reversed(s);
    cout<<"printing the reversed stack : "<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
