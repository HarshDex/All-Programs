//write a c program to find intersection of the two array 
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of  element in the array 1 :  ");
    scanf("%d",&n);

    int m;
    printf("enter the number of  element in the array 2 :  ");
    scanf("%d",&m);
    int ar1[n];
    int ar2[m];
    printf("enter the element in the array 1 : ");
    for(int i =0;i<n;i++)
        scanf("%d",&ar1[i]);

    printf("enter the element in the array 2 : ");
    for(int i =0;i<m;i++)
    scanf("%d",&ar2[i]);

    printf("Intersection of the two array : ");
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            if(ar1[i] == ar2[j])
                printf("%d ",ar1[i]);
        }
    }
    
    return 0;
}