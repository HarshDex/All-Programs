#include <bits/stdc++.h>
using namespace std;
int maxi(int *ar,int n,int k){
    priority_queue<int> pq;
    for(int i =0;i<n;i++){
        pq.push(ar[i]);
    }
    for(int i=0;i<k-1;i++){
        pq.pop();
    }
    return pq.top();
}
int mini(int *ar,int n,int k){
    priority_queue<int> pq;
        for(int i =0;i<k;i++)
            pq.push(ar[i]);
            
        for(int i=k;i<=n;i++){
            if(ar[i]<pq.top())
            {
                pq.pop();
                pq.push(ar[i]); 
            }
        }
        int ans = pq.top();
        return ans;
}
int main()
{
    int n;
    cout<<"enter the number of element : ";
    cin>>n;

    int ar[n];
    cout<<"enter the elements : "<<endl;
    for(int i =0;i<n;i++)
        cin>>ar[i];

    int k;
    cout<<"enter the value of k(for max) : ";
    cin>>k;
    
    int ans = maxi(ar,n,k);
    cout<<"kth maximum element is : "<<ans<<endl;

    int kmin;
    cout<<"enter the of k(for min) : ";
    cin>>kmin;

    cout<<"kth manimum element is : "<<mini(ar,n,kmin);
    return 0;
}
