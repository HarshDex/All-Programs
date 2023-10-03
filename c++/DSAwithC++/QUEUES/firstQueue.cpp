#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in the queue : ";cin>>n;

    queue<int> q;
    
    for(int i =0 ;i<n;i++){
        int a;
        cout<<"enter the "<<i + 1<<" element : ";cin>>a;
        q.push(a);
    }

    cout<<"size of the queue : "<<q.size()<<endl;
    cout<<"front elment of the queue : "<<q.front()<<endl;
    cout<<"rear element of the queue : "<<q.back()<<endl;
    cout<<"poping out all the element : ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
