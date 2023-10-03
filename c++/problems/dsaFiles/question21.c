//write a c program to sort an array using bubble sort technique 
#include<stdio.h>
int sort(int *ar,int n)
{
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<n-1;j++)
        {
            if(ar[i]<ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    return ar;
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
    
    int *a = sort(ar,n);
    for(int i =0;i<n;i++)
        printf("%d ",a[i]);


  return 0;
}