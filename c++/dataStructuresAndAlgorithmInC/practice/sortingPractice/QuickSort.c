#include<stdio.h>
#include<stdlib.h>

int position(int *ar,int s,int e)
{
    int pivot = ar[s];
    int count = 0;
    for(int i=s;i<=e;i++)
    {
        if(ar[i]<=pivot)
            count++;
    }

    int pivotIndex = s + count;
    int temp;
    temp = ar[s];
    ar[s] = ar[pivotIndex];
    ar[pivotIndex] = temp;
    
    int i = s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex)
    {
        while(ar[i] < pivot)
        {
            i++;
        }
        while(ar[j] > pivot)
        {
            j--;
        }
        if(i > pivotIndex && j < pivotIndex)
        {
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
    }   
    return pivotIndex;
}
int quickSort(int *ar,int s,int e)
{
    if(s>=e)
        return;
    
    int pos = position(ar,s,e);

    quickSort(ar,s,pos-1);
    quickSort(ar,pos,e);
    int *p = &ar;
    return p;
}
int main()
{
    int n;
    printf("enter the number of element : ");
    scanf("%d",&n);

    int  *ar = (int*)malloc(n*sizeof(int));

    printf("enter elements : \n");
    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);

    printf("printing the unsorted array : ");
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);

    int *p = quickSort(ar,0,n-1);
    printf("printing the sorted array : ");
    for(int i =0;i<n;i++)
        printf("%d ",p[i]);

    return 0;
}