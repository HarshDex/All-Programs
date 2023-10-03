//write a c program to send all the positive element of the array at the last 
#include<stdio.h>
void arrange(int **ar,int n)
{
    int i =0;
    int j = 0;
    int temp;
    while(i<n)
    {
        if(*ar[i]<0)
        {
            temp = *ar[i];
            for(j =0;j<n;j++)
            {
                *ar[j] = *ar[j+1];
            }
            *ar[n-1] = temp;
        }
    }
}
int main()
{
    int n;
    printf("enter the number of element in the array : ");
    scanf("%d",&n);

    int ar[n];
    printf("enter the element in the array :\n");
    for(int i =0;i<n;i++)   
        scanf("%d",&ar[i]);

    int *ptr = ar;
    arrange(&ptr,n);

    printf("printing the array :\n");
    for(int i =0;i<n;i++)   
        scanf("%d",&ar[i]);
   return 0;
}