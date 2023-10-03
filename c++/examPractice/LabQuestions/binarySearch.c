#include<stdio.h>
#include<stdlib.h>
int binarySearch(int *ar,int s,int e,int k){
    if(s >= e)
        return -1;
    int mid = s + (e-s)/2;
    if(ar[mid] == k)
        return 1;
    else if(ar[mid] > k)
        return binarySearch(ar,s,mid-1,k);
    else    
        return binarySearch(ar,mid+1,e,k);
}
int countOccurance(int *ar,int n,int k){
    int count = 0;
    for(int i =0;i<n;i++){
        if(k == ar[i])  
            count++;
    }
    return count;
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
    
    int k;
    printf("enter the element you want to search : ");
    scanf("%d",&k);

    int ans = binarySearch(ar,0,n-1,k);
    
    if(ans != 1)
        printf("element not found");
    else{
        printf("element found");
        int count = countOccurance(ar,n,k);
        printf(" and it occured %d times",count);
    }

    return 0;
}