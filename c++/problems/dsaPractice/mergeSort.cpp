#include<stdio.h>
#include<stdlib.h>
void merge(int *ar,int s,int e,int mid){
    int l1 = mid-s+1;
    int l2 = e-mid;
    int ar1[l1];
    int ar2[l2];
    for(int i =0;i<l1;i++)
        ar1[i] = ar[i+s];
    for(int i =0;i<l2;i++)
        ar2[i] = ar[mid+i+1];
    int i =0;
    int j = 0;
    int k = s;
    while(i<l1 && j < l2){
        if(ar1[i] <= ar2[j]){
            ar[k] = ar1[i];
            i++;k++;
        }
        if(ar1[i] > ar2[j]){
            ar[k] = ar2[j];
            k++;j++;
        }
    }
    while(i<l1){
        ar[k] = ar1[i];
        i++;k++;
    }
    while(j<l2){
        ar[k] = ar2[j];
        j++;k++;
    }
}
void mergeSort(int *ar,int s,int e)
{
    if(s>=e)
        return;
    int mid = s+(e-s)/2;
    mergeSort(ar,s,mid);
    mergeSort(ar,mid+1,e);
    merge(ar,s,e,mid);
}
int main()
{
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);

    int ar[n];
    printf("enter the elements in the array : ");
    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("printing the array before sorting : ");
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);
    mergeSort(ar,0,n-1);
    printf("\nprinting the array after sorting : ");
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);
    return 0;
}