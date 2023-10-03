#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int *ar,int n,int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l < n && ar[l] > ar[largest])
        largest = l;
    if(r < n && ar[r] > ar[largest])
        largest = r;
    if(largest != i){
        swap(&ar[i],&ar[largest]);
        heapify(ar,n,largest);
    }
}
void heap(int *ar,int n){
    for(int i=n/2+1;i>=0;i--){
        heapify(ar,n,i);
    }
}
void deleteroot(int *ar , int size,int data)
{
    int i;
    for(i =0;i<size;i++)
    {
        if(ar[i] == data)
            break;
    }
    int temp = ar[i];
    ar[i] = ar[size-1];
    ar[size-1] = temp;
    size=size-1;
    for(int m = (size/2)-1;m >= 0;m--)
        heapify(ar,size,m);
}
int kthLargest(int *ar,int n,int k){
    heap(ar,n);
    for(int i =0;i<k-1;i++){
        deleteroot(ar,n,ar[0]);
    }
    return ar[0];
}
int main()
{
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);

    int ar[n];
    printf("enter the elements : ");
    for(int i =0 ;i<n;i++)
        scanf("%d",&ar[i]);
    
    int k;
    printf("enter the value of k :");
    scanf("%d",&k);

    int ans = kthLargest(ar,n,k);
    printf("the value of the %d th largest element is : %d",k,ans);
    return 0;
}

