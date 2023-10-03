// 26-> write a c program to implement binary search in the array 
#include<stdio.h>
int search(int *ar,int n,int k)
{   
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low +high)/2;
        if(ar[mid] == k)
            return 1;
        else if(ar[mid]>k)
            high = mid-1;
        else
            low = mid+1;
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
    if(search(ar,n,k) == 1)
        printf("found");
    else    
        printf("not found");

  return 0;
}