#include <bits/stdc++.h>
using namespace std;
void heapify(int *ar,int n,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left < n && ar[left] > ar[largest])
        largest = left;
    else if(right < n && ar[right] > ar[largest])
        largest = right;
    if(largest != i){
        swap(ar[largest],ar[i]);
        heapify(ar,n,largest);
    }
}
int main()
{
    int n;
    cout<<"enter the number of elements in the array : ";cin>>n;
    n++;
    
    int ar[n];
    ar[0] = -1;

    for(int i = 1;i<n;i++){
        cout<<"enter the element : ";cin>>ar[i];
    }

    for(int i =n/2;i>0;i--)
        heapify(ar,n,i);
    
    cout<<"printing the maxHeap : ";

    for(int i=1;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}
