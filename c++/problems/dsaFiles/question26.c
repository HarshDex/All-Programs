//write a c program to implement linear search 
#include<stdio.h>
int search(int *ar,int n,int k)
{
    for(int i =0;i<n;i++)
    {
        if(ar[i] == k)
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    printf("enter the number of element in the array : ");
    scanf("%d",&n);
    int ar[n];
    for(int i = 0;i<n;i++)
        scanf("%d",&ar[i]);

    int k;
    printf("enter the element you want to search : ");
    scanf("%d",&k);
    if(search(ar,n,k))
        printf("found");
    else    
        printf("not found");
   return 0;
}