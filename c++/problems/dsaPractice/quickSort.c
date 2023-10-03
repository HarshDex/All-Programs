#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int position(int *ar,int s,int e){
    int pivot = ar[s];
    int count = 0;
    for(int i =s+1;i<=e;i++){
        if(ar[i] <= pivot)
            count++;
    }
    int pivotIndex = s+count;
    swap(&ar[s],&ar[pivotIndex]);
    int i =s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(ar[i]<pivot){
            i++;
        }
        while(ar[j] > pivot){
            j--;
        }
        if(i<pivotIndex && j > pivotIndex)
            swap(&ar[i],&ar[j]);
    }
    return pivotIndex;
}
void quickSort(int *ar,int s,int e){
    if(s>=e)    
        return;
    int p = position(ar,s,e);
    quickSort(ar,s,p-1);
    quickSort(ar,p+1,e);
}
int main()
{
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);

    int ar[n];
    printf("enter element : ");
    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);
    

    printf("printing the elements before sorting : ");
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);
    printf("\nprinting the elements after sorting : ");
    quickSort(ar,0,n-1);
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);

    return 0;
}