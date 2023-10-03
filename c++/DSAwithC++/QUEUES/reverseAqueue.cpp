#include <bits/stdc++.h>
using namespace std;
void print(queue<int> q){
    while(!q.empty()){
        int a = q.front();
        cout<<a<<" ";
        q.pop();
    }
}
void reverse(queue<int> &q){
    if(q.empty()){
        return;
    }
    int a = q.front();
    q.pop();
    reverse(q);
    q.push(a);
}
int main()
{
    int n;
    cout<<"enter the number of elements : ";cin>>n;

    queue<int> q;

    cout<<"enter the elements in the queue : "<<endl;
    for(int i =0 ;i<n;i++){
        int a;
        cout<<"enter element :  ";cin>>a;
        q.push(a);
    }
    
    reverse(q);
    cout<<"printing the reversed queue : ";
    // cout<<q.size()<<endl;
    print(q);

    return 0;
}
