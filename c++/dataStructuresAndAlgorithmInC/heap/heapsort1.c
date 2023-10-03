#include<stdio.h>
#include<stdlib.h>
//fuction is used to print data
void printData(int *ar ,int n)
{
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);
    printf("\n");
}
//function is used to swap the element 
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//function is used to heapify 
void heapify(int *ar,int n,int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l < n && ar[l] > ar[largest])
        largest = l;
    if(r < n && ar[r] > ar[largest])
        largest = r;
    if(i != largest)
    {
        swap(&ar[i],&ar[largest]);
        heapify(ar,n,largest);
    }
}

//heapsort function
void heapSort(int *ar,int n)
{
    //creating heap out of array
    for(int i = n/2-1;i>=0;i--)
        heapify(ar,n,i);
    
    //code for heap sort
    for(int i =n-1;i>= 0 ;i--)
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

    printf("enter elements : ");
    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);

    printf("printing the data : ");
    printData(ar,n);

    heapSort(ar,n);
    printf("printing the data after sorting : ");
    printData(ar,n);
    return 0;
}