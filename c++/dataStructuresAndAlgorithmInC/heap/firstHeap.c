#include<stdio.h>
#include<stdlib.h>
int size = 0;
void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heap(int *ar,int size,int index)
{
    if(size == 1)
        printf("there is only one element !!");
    else
    {
        int largest = index;
        int l = 2*index +1;
        int r = 2*index +2;
        if(l < size && ar[l] > ar[largest])
            largest = l;
        if(r < size && ar[r] > ar[largest])
            largest = r;
        if(largest != index)
        {
            swap((&ar[largest]),(&ar[index]));
            heap(ar,size,largest);
        }
    }
}
void printData(int *ar,int size)
{
    for(int i =0;i<size;i++)
        printf("%d ",ar[i]);
    printf("\n");
}
void deleteroot(int *ar , int data)
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
        heap(ar,size,m);
}
void insert(int *ar,int data)
{
    if(size == 0){
        ar[0] = data;
        size++;
    }
    else
    {
        ar[size] = data;
        size++;
        for(int m = size/2 -1;m>=0;m--)
            heap(ar,size,m);
    }
    return;
}
int main()
{
    int n;
    printf("enter the number of element in the array : ");
    scanf("%d",&n);

    int ar[n];

    printf("enter the elements in the array : \n");
    for(int i =0;i<n;i++)
    {
        int a;
        printf("enter element : ");
        scanf("%d",&a);
        insert(ar,a);
    }

    printData(ar,size);


    int a;
    printf("enter the element : ");
    scanf("%d",&a);
    deleteroot(ar,a);

    printData(ar,size);
    return 0;
}