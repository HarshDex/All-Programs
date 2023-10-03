#include<stdio.h>
#include<stdlib.h>
void printData(int *ar,int n)
{
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);
    printf("\n");
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int *ar,int n,int i)
{
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l< n && ar[l] > ar[largest])
        largest = l;
    if(r< n && ar[r] > ar[largest])
        largest = r;
    if(i != largest)
    {
        swap(&ar[i],&ar[largest]);
        heapify(ar,n,largest);
    }
}
void heapSort(int *ar,int n)
{
    for(int i =(n/2)-1;i>=0;i--)
        heapify(ar,n,i);
    for(int i = n-1;i>=0;i--)
    {
        swap(&ar[0],&ar[i]);
        heapify(ar,i,0);
    }
}
int main()
{
    int n;
    printf("enter the number of element : ");
    scanf("%d",&n);

    int ar[n];
    printf("enter element in the array : \n");
    for(int i = 0;i<n;i++)
        scanf("%d",&ar[i]);
    
    printf("printing unsorted array : ");
    printData(ar,n);

    heapSort(ar,n);
    printf("printing sorted array : ");
    printData(ar,n);
    return 0;
}