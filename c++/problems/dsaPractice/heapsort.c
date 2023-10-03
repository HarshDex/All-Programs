#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int *ar,int size,int index){
    if(size == 1)
        printf("there is only one element !!");
    else{
        int largest = index;
        int l = 2*index + 1;
        int r = 2*index + 2;
        if(l<size && ar[l] > largest)
            largest = l;
        if(r<size && ar[r] > largest)
            largest = r;
        if(largest!=index){
            swap(&ar[largest],&ar[index]);
            heapify(ar,size,largest);
        }
    }
}
void heapSort(int *ar,int n){
    for(int i = n/2-1;i>=0;i--)
        heapify(ar,n,i);
    for(int i = n-1;i>=0;i--){
        swap(&ar[0],&ar[i]);
        heapify(ar,i,0);
    }
}
int main()
{
    int n;
    printf("enter the number of elements in the array : ");
    scanf("%d",&n);

    int ar[n];
    printf("enter the elements : ");
    for(int i =0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("printing the unsorted data : ");
    for(int i =0;i<n;i++){
        printf("%d ",ar[i]);
    }

    heapSort(ar,n);
    printf("printing the sorted data : ");
    for(int i =0;i<n;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}