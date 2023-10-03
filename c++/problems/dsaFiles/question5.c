//Write a C program to store N elements into the array and then reverse the contents of that array.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of  element in the array  ");
    scanf("%d",&n);
    int ar[n];
    printf("enter the element in the array :\n ");
    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);

    int i =0;
    int j = n-1;
    while(i<j)
    {
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
        i++;
        j--;
    }

    printf("printing the reverse of the array : ");
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);

    
    return 0;
}