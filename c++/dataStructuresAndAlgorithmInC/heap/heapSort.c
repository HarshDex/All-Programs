#include<stdio.h>
#include<stdlib.h>
void printData(int *ar,int n)
{
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);
    printf("\n");
}
void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heap(int *ar,int n,int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l < n && ar[l] > ar[largest])
        largest = l;
    if(r < n && ar[r] > ar[largest])
        largest = r;
    if(largest != i)
    {
        swap(&ar[largest],&ar[i]);
        heap(ar,n,largest);
    }
}
void heapSort(int *ar,int n)
{
    for(int i = n/2 -1;i>= 0;i--)
        heap(ar,n,i);
    //actual heap sort 
    for(int i =n-1;i>=0;i--)
    {
        swap(&ar[0],&ar[i]);
        heap(ar,i,0);
    }
}
int main()
{
    int n;
    printf("enter the number of element in the array : ");
    scanf("%d",&n);

    int ar[n];
    printf("enter the element in the array : \n");
    for(int i =0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&ar[i]);
    }

    heapSort(ar,n);
    printf("printing the data after sorting : \n"); 
    printData(ar,n);

    return 0;
}