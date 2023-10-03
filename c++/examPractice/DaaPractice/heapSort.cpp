#include <bits/stdc++.h>
using namespace std;
void heapify(int *ar,int n,int i){
    int largest = i;
    int lh = 2*i+1;
    int rh = 2*i+2;
    if(lh < n && ar[lh] > ar[largest])
        largest = lh;
    else if(rh < n && ar[rh] > ar[largest])
        largest = rh;
    if(i!=largest){
        swap(ar[i],ar[largest]);
        heapify(ar,n,largest);
    }
}
void heapSort(int *ar,int n){
    //for creating
    for(int i = n/2-1;i>=0;i--){
        heapify(ar,n,i);
    }
    for(int i = n -1;i>=0;i--){
        swap(ar[i],ar[0]);
        heapify(ar,i,0);
    }
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

    heapSort(ar,n);

    cout<<endl<<"after sorting : ";
    for(int i =0;i<n;i++) cout<<ar[i]<<" ";

    return 0;
}
