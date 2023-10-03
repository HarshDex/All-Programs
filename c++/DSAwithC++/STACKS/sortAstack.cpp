#include <bits/stdc++.h>
using namespace std;
void sortInsert(stack<int> &s,int num){
    if(s.empty() || (!s.empty() && s.top() < num)){
        s.push(num);
        return;

        int n = s.top();
        s.pop();

        sortInsert(s,num);
        s.push(n);
    }
}
void Sort(stack<int> &s){
    if(s.empty())
        return;
    
    int num = s.top();
    s.pop();

    Sort(s);
    sortInsert(s,num);
}
int main()
{
    int n;
    cout<<"enter the number of element you want to push in the stack : ";cin>>n;
    
    stack<int> s;
    cout<<"enter the elements : "<<endl;
    for(int i =0;i<n;i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }
    
    Sort(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}
