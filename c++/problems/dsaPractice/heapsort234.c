#include<stdio.h>
#include<stdlib.h>
int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int *ar,int n, int i){
    int largest = i;
    int l = 2*n+1;
    int r = 2*n+2;
    if(l<n && ar[largest]<ar[l])
        largest = l;
    if(r<n && ar[largest]<ar[r])
        largest = r;      
    if(largest!=i){
        swap(&ar[i],&ar[largest]);
        heapify(ar,n,largest);
    }                                                    
}
void headSort(int *ar,int n,int i){
    for(int i =n/2-1;i>=0;i--)
        heapify(ar,n,i);
    for(int i =n-1;i>=0;i--)
        heapify(ar,n,0);
}
int main()
{
    int n;
    printf("enter the number of elements present in the array : ");
    scanf("%d",&n);

    int ar[n];
    for(int i =0;i<n;i++){
        printf("enter the elemenet : ");
        scanf("%d",&ar[i]);
    }
    printf("printing the array before sorting : ");
    for(int i = 0;i<n;i++){
        printf("%d ",ar[i]);
    }
    heapify(ar,n,0);
    printf("\nprinting the array after sorting : ");
    for(int i = 0;i<n;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}