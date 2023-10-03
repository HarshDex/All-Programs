#include <bits/stdc++.h>
using namespace std;
void insertAtLast(stack<int> &s ,int key,int size){
    if(s.empty())
    {
        s.push(key);
        return;
    }

    int num = s.top();
    s.pop();

    insertAtLast(s,key,size);
    s.push(num);
}
int main()
{
    int n;
    cout<<"enter the number of element : ";cin>>n;

    stack<int> s;

    cout<<"enter the elements into the stack : "<<endl;
    for(int i =0;i<n;i++)
    {
        int a;
        cout<<"enter the element : ";cin>>a;
        s.push(a);
    }

    int k;
    cout<<"enter the element which you want to push in the last : ";cin>>k;
    insertAtLast(s,k,n);

    cout<<s.top()<<endl;
    
    cout<<"printing the stack : ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
