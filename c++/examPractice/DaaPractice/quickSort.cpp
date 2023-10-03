#include <bits/stdc++.h>
using namespace std;
int position(int *ar,int s,int e){
    int pivot = ar[s];
    int count = 0;
    for(int i =s+1;i<=e;i++){
        if(ar[i] < pivot) count++;
    }
    int pivotIndex = s + count;
    swap(ar[s],ar[pivotIndex]);
    int i =s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(ar[i] < pivot) i++;
        while(ar[j] > pivot) j--;
        if(i < pivotIndex && j > pivotIndex){
            swap(ar[i],ar[j]);
            i++;j--;
        }
    }
    return pivotIndex;
}
void quickSort(int *ar,int s,int e){
    if(s >= e)
        return;
    int pos = position(ar,s,e);
    quickSort(ar,s,pos-1);
    quickSort(ar,pos+1,e);
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

    quickSort(ar,0,n-1);

    cout<<endl<<"after sorting : ";
    for(int i =0;i<n;i++) cout<<ar[i]<<" ";

    return 0;
}
