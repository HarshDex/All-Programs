//find the maximum element in the array : 
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of  element in the array :");
    scanf("%d",&n);
    int ar[n];
    printf("enter the element in the array :\n");
    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);

    int max = ar[0];
    for(int i =1;i<n;i++)
    {
        if(max < ar[i])
            max = ar[i];
    }

    printf("printing the maximum element in the  array : ");
    printf("%d",max);

    
    return 0;
}