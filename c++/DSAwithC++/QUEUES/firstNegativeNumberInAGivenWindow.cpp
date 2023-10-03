#include <bits/stdc++.h>
using namespace std;
void printData(vector<int> &ans){
    for(int element : ans)  
        cout<<element<<" ";
}
vector<int> firstNegative(vector<int> v,int k,int n){
    deque<int> dq;
    vector<int> ans;

    for(int i = 0;i<k;i++){
        if(v[i] < 0)
            dq.push_back(i);
    }

    if(!dq.empty())
        ans.push_back(v[dq.front()]);
    else
        ans.push_back(0);

    //for(remaining cases)

    for(int i = k;i<n;i++){
        if(!dq.empty() && i - dq.front() >= k)
            dq.pop_front();

        if(v[i] < 0)
            dq.push_back(i);
        
        if(!dq.empty())
        ans.push_back(v[dq.front()]);
        else
            ans.push_back(0);
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter the number of elements : ";cin>>n;

    vector<int> v;
    for(int i = 0 ;i<n;i++){
        int a;
        cout<<"enter the element : ";
        cin>>a;
        v.push_back(a);
    }

    int k;
    cout<<"enter the size of the window : ";cin>>k;

    vector<int> ans = firstNegative(v,k,n);
    printData(ans);

    return 0;
}
