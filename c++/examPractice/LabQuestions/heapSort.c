#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int *ar,int n,int i){
    int largest = i;
    int lh = 2*i+1;
    int rh = 2*i+2;
    if(lh < n && ar[lh] > ar[largest])
        largest = lh;
    else if(rh < n && ar[rh] > ar[largest])
        largest = rh;
    if(i!=largest){
        swap(&ar[i],&ar[largest]);
        heapify(ar,n,largest);
    }
}
void heapSort(int *ar,int n){
    for(int i = n/2 -1 ;i>=0;i--)      
        heapify(ar,n,i);
    // for sorting
    for(int i = n-1;i>=0;i--) { 
        swap(&ar[i],&ar[0]);
        heapify(ar,i,0);
    }     
       
}
int main()
{
    int n;
    printf("enter the number of elements in the array : ");
    scanf("%d",&n);

    int *ar = (int*)malloc(n*sizeof(int));
    printf("enter the elements : ");
    for(int i = 0;i<n;i++)
        scanf("%d",&ar[i]);

    printf("printing the array without sorting : ");
    for(int i = 0;i<n;i++)
        printf("%d ",ar[i]);

    heapSort(ar,n);
    
    printf("\nprinting the array after sorting : ");
    for(int i =0 ;i<n;i++)  
        printf("%d ",ar[i]);

    return 0;
}