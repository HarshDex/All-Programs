#include<stdio.h>
#include<stdlib.h>
void printData(int ar[],int n)
{
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);
    printf("\n");
}
void merge(int ar[],int mid,int s,int e)
{
    int l1 = mid-s+1;
    int l2 = e-mid;
    int ar1[l1];
    int ar2[l2];
    for(int i =0;i<l1;i++)
        ar1[i] = ar[i];
    int m =0;
    for(int i =l1;i<e;i++)
        ar2[m++] = ar[i];
    int i =0;
    int j = 0;
    int k = s;
    while(i<l1 && j<l2)
    {
        if(ar1[i]<=ar2[j])
        {
            ar[k] = ar1[i];
            i++;k++;
        }
        else if(ar1[i]>=ar2[j])
        {
            ar[k] = ar2[j];
            j++;k++;
        }
    }
    while(i<l1)
    {
        ar[k] = ar1[i];
        i++;k++;
    }
    while(j<l2)
    {
        ar[k] = ar2[j];
        j++;k++;
    }
}
void mergeSort(int ar[],int s,int e)
{
    if(s<e)
    {
        int mid = (s+e)/2;
        mergeSort(ar,s,mid-1);
        mergeSort(ar,mid,e);
        merge(ar,mid,s,e);
    }
}
int main()
{ 
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);

    int ar[n];
    printf("input Elements :\n");
    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);
    
    printf("printing array before sorting :\n ");
    printData(ar,n);
    mergeSort(ar,0,n-1);
    printData(ar,n);

    return 0;
}