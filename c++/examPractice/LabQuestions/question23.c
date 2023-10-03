#include<stdio.h>
int count(int *ar,int n,int k){
    int cnt = 0;
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if((ar[j] - ar[i]) == k)
                cnt++;
        }
    }
    return cnt;
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

    printf("number of pair whose difference  is equal to k : %d",count(ar,n,k));
    return 0;
}