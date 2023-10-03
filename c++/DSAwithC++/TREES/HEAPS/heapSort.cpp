#include <bits/stdc++.h>
using namespace std;
void heapify(int *ar,int n,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left <= n && ar[left] > ar[largest])
        largest = i;
    else if(right <= n && ar[right] > largest)        
        largest = right;
    if(largest != i)
    {
        swap(ar[i],ar[largest]);
        heapify(ar,n,largest);
    }
}
void heapSort(int *ar,int n){
    int size = n;
    while(size > 1){
        swap(ar[1],ar[size]);
        size--;
        heapify(ar,size,0);
    }
}
int main()
{
    int n;
    cout<<"enter the number of elements in the array : ";cin>>n;
    
    int ar[n];
    n++;
    ar[0] = -1;
    for(int i =1;i<n;i++){
        cout<<"enter the element : ";cin>>ar[i];
    }

    for(int i = 0;i<n;i++)
        heapify(ar,n,i);

    heapSort(ar,n);

    cout<<"printing the array before sorting : ";
    for(int i =1;i<n;i++)  
        cout<<ar[i]<<" ";

    cout<<"\nprinting the array after sorting : ";
    for(int i =1;i<n;i++)  
        cout<<ar[i]<<" ";
    return 0;
}
