#include <bits/stdc++.h>
using namespace std;
void merge(int *ar,int s,int mid,int e){
    int l1 = mid-s+1;
    int l2 = e-mid;
    int *ar1 = new int[l1];
    int *ar2 = new int[l2];
    for(int i=0;i<l1;i++){
        ar1[i] = ar[s+i];
    }
    for(int j = 0;j<l2;j++){
        ar2[j] = ar[mid+1+j];
    }
    int i =0;
    int j =0;
    int k = s;
    while(i < l1 && j < l2){
        if(ar1[i] <= ar2[j]){
            ar[k] = ar1[i];
            i++;
        }
        else{
            ar[k] = ar2[j];
            j++;
        }
        k++;
    }
    while(i < l1){
        ar[k] = ar1[i];
        k++;
        i++;
    }
    while(j < l2){
        ar[k] = ar1[j];
        k++;
        j++;
    }
    delete[] ar1;
    delete[] ar2;
}
void mergeSort(int *ar,int s,int e){
    if(s >= e)
        return;
    int mid = s+(e-s)/2;
    mergeSort(ar,s,mid);
    mergeSort(ar,mid+1,e);
    merge(ar,s,mid,e);
}
int main(){
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;

    int ar[n];
    cout<<"enter the elements : ";
    for(int i =0;i<n;i++) cin>>ar[i];

    cout<<"before sorting : ";
    for(int i =0;i<n;i++) cout<<ar[i]<<" ";

    mergeSort(ar,0,n-1);

    cout<<endl<<"after sorting : ";
    for(int i =0;i<n;i++) cout<<ar[i]<<" ";

    return 0;
}
