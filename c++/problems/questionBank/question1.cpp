//implementing the heapsort technique
#include <bits/stdc++.h>
using namespace std;
void printData(int *ar,int n){
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
}
void heapify(int *ar,int n,int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<n && ar[l] > ar[largest])
        largest = l; 
    if(r<n && ar[r] > ar[largest])
        largest = r;
    if(i!=largest){
        swap(ar[i],ar[largest]);
        heapify(ar,n,largest);
    }
}
void heapSort(int *ar,int n,int i){
    for(int i = n/2-1;i>=0;i--){
        heapify(ar,n,i);
    }
    for(int i = n-1;i>=0;i--){
        swap(ar[0],ar[i]);
        heapify(ar,n,0);
    }
}
int main()
{
    int n;
    cout<<"enter the size of the array : ";cin>>n;
    int ar[n];
    for(int i =0 ;i<n;i++){
        cout<<"enter element : ";cin>>ar[i];
    }

    cout<<"printing the unsorted array : ";
    printData(ar,n);

    cout<<"\nprinting the sorted array : ";
    heapSort(ar,n,0);
    printData(ar,n);
    return 0;
}
