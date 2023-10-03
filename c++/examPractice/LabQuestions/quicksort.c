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
    for(int i =s+1;i<e;i++){
        if(ar[i] <= pivot)
            count++;
    }
    int pivotInd = s+count;
    swap(&ar[pivotInd],&ar[s]);
    int i = s;
    int j = e;
    while(i < pivotInd && j > pivotInd){
        if(ar[i] < pivot)
            i++;
        if(ar[j] > pivot)
            j--;
        if(i < pivotInd && j > pivotInd){
            swap(&ar[i],&ar[j]);
        }
    }
    return pivotInd;
}
void quickSort(int *ar,int s,int e){
    if(s >= e)
        return;
    int pos = position(ar,s,e);
    quickSort(ar,s,pos-1);
    quickSort(ar,pos+1,e);
}
int main()
{
    int n;
    printf("enter the number of elements in array : ");
    scanf("%d",&n);

    int ar[n];
    printf("enter the elements : ");
    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);

    printf("unsorted array : ");
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);

    
    quickSort(ar,0,n-1);

    printf("\nsorted array : ");
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);

    return 0;
}