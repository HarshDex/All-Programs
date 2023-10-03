#include <bits/stdc++.h>
using namespace std;
void merge(int *ar,int s,int mid,int e){
    int n1 = mid-s+1;
    int n2 = e-mid;
    int ar1[n1];int ar2[n2];
    for(int i =0;i<n1;i++) ar1[i] = ar[s+i];
    for(int j = 0;j<n2;j++) ar2[j] = ar[mid+1+j];
    int i =0,j = 0,k = s;
    while(i < n1 && j < n2){
        if(ar1[i] < ar2[j])ar[k++] = ar1[i++];
        else if(ar1[i] >= ar2[j])ar[k++] = ar2[j++];
    }
    while(i < n1) ar[k++] = ar1[i++];
    while(j<n2) ar[k++] = ar2[j++];
}
void mergeSort(int *ar,int s,int e){
    if(s>=e) return;
    int mid = s + (e-s)/2;
    mergeSort(ar,s,mid);
    mergeSort(ar,mid+1,e);
    merge(ar,s,mid,e);
}
int main()
{
    int n;
    cout<<"enter the number of elements : ";cin>>n;
    int ar[n];cout<<"enter the elements : ";
    for(int i =0;i<n;i++) cin>>ar[i];
    cout<<"array before sorting : ";
    for(auto it : ar) cout<<it<<" ";
    mergeSort(ar,0,n-1);
    cout<<"array after sorting : ";
    for(auto it : ar) cout<<it<<" ";
    return 0;
}
