//write a c program to create a dynamic array 
#include<stdio.h>
#include<malloc.h>
int main()
{
    int n;
    printf("enter the number of  element in the array  ");
    scanf("%d",&n);
    int *ar = (int*)malloc(n*sizeof(int));
    printf("enter the element in the array :\n");
    for(int i =0;i<n;i++)
        scanf("%d",&*(ar+i));
    printf("printing the element of the dynamic array : ");
    for(int i =0;i<n;i++)
        printf("%d ",*(ar+i));

    return 0;
}