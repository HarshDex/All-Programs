#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &v,vector<int> &ans,stack<int> &s){
    s.push(-1);
    for(int i = v.size();i>=0;i++){
        int cur = v[i];
        while(cur <= s.top()){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(cur);
    }
}

int main()
{
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;

    vector<int> v;
    cout<<"enter the elements : "<<endl;

    for(int i =0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    stack<int> s;

    vector<int> ans;

    solve(ans,v,s);

    return 0;
}
