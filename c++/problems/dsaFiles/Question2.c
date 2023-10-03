#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of  element in the array  ");
    scanf("%d",&n);
    int ar[n];
    printf("enter the element in the array : ");
    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);

    int sum = 0;
    for(int i =0;i<n;i++)
    {
        if(ar[i]%2 != 0)
            sum = sum+ar[i];
    }

    printf("sum of all the even number : %d",sum);
    
    return 0;
}