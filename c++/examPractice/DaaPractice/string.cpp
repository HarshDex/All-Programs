#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    queue<int> q;
    for(int i =0;i<n;i++){
        int a;
        cin>>a;
        q.push(a);
    }
    while(!q.empty()){
        int a = q.front();
        q.pop();
        cout<<a<<" ";
    }
}
