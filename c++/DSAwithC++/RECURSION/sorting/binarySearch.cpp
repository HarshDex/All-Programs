#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int> v,int s,int e,int k){
    if(s > e)  return false;
    int mid = s+(e-s)/2;
    if(v[mid] == k) return true;
    else if(v[mid] > k) return binarySearch(v,s,mid-1,k);
    else if(v[mid] < k) return binarySearch(v,mid+1,e,k);
}
bool binarySearch(vector<int> v,int s,int e,int k){
    while(s<e){
        int mid = s + (e-s)/2;
        if(v[mid] == k) return true;
        else if(v[mid] > k) e = mid-1; 
        else s = mid+1;
    }
    return false;
}
int main(){
    int n;
    cout<<"enter the number of elements in the aray : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter the elements : ";
    for(int i =0;i<n;i++)cin>>v[i];

    int k;
    cout<<"enter the element which you want to search : ";
    cin>>k;

    sort(v.begin(),v.end());

    if(binarySearch(v,0,n-1,k)) cout<<"element found";
    else cout<<"element not found";


}
