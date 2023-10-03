#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int *ar,int s,int e,int k){
    if(s > e) return false;
    int mid = s + (e-s)/2;
    if(ar[mid] == k) return true;
    else if(ar[mid] > k) return binarySearch(ar,s,mid-1,k);
    else if(ar[mid] < k) return binarySearch(ar,mid+1,e,k);
}
int main()
{
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;

    int ar[n];
    cout<<"enter the elements : ";
    for(int i =0;i<n;i++) cin>>ar[i];

    int k;
    cout<<"enter the key which you want to find : ";cin>>k;
    
    if(binarySearch(ar,0,n-1,k)) cout<<"element found"<<endl;
    else cout<<"not found"<<endl;

    return 0;
}
