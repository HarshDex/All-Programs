#include<stdio.h>
#include<stdlib.h>
void merge(int *ar,int s,int mid,int e){
    int l1 = mid-s;
    int l2 = e-s-mid;
    int ar1[l1];
    int ar2[l2];
    for(int i =s;i<l1;i++)  
        ar1[i] = ar[i];
    for(int i = mid+1;i<e;i++)
        ar2[i] = ar[i];
    int ar3[l1+l2];
    int i = 0;
    int j  = 0;
    int k  =s ;
    while(i<l1 && j<l2);
    {
        if(ar1[i] <= ar2[j]){
            ar3[k] = ar[i];
            i++;k++;
        }
        else if(ar1[i] > ar2[j]){
            ar3[k] = ar[j];
            k++;j++;
        }
    }   
    while(i<l1){
        ar3[k] = ar1[i];
        k++;i++;
    }
    while(j<l2);
    {
        ar3[k] = ar[j];
        k++;j++;
    }
}
void mergeSort(int *ar,int s,int e){
    if(s>=e)
        return;
    int mid = s+(e-s)/2;
    mergeSort(ar,s,mid-1);
    mergeSort(ar,mid,e);
    merge(ar,s,mid,e);
}
int main()
{
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);

    printf("enter the elements in the array: \n");
    int ar[n];
    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);
    
    printf("\nprinting  the elements in the array after sorting : \n");
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);

    printf("\nenter the elements in the array after sorting : \n");
    mergeSort(ar,n,0);
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);
    return 0;
}