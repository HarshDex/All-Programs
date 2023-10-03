#include<stdio.h>
#include<stdlib.h>
void merge(int *ar,int s,int e){
    int mid = s + e/2;
    int n1 = mid-s+1;
    int n2 = e-mid;
    int ar1[n1];
    int ar2[n2];
    int k = s;
    for(int i =0;i<n1;i++){
        ar1[i] = ar[k++];
    }
    int l = mid +1;
    for(int i = 0;i<n2;i++){
        ar2[i] = ar[l++];
    }
    int i =0;
    int j = 0;
    int p = s;
    while(i < n1 && j < n2){
        if(ar1[i] <= ar2[j])
            ar[p++] = ar1[i++];
        else
            ar[p++] = ar2[j++];
    }
    while(i < n1){
        ar[p++] = ar1[i++];
    }
    while(j < n2){
        ar[p++] = ar2[j++];
    }
}
void mergeSort(int *ar,int s,int e){
    if(s>=e) 
        return;
    int mid = s + e/2;
    mergeSort(ar,s,mid);
    mergeSort(ar,mid+1,e);
    mergeSort(ar,s,e);
}
int main()
{

    int n;
    printf("enter the number of elements in array : ");
    scanf("%d",&n);

    int ar[n];
    printf("enter the elements : ");
    for(int i =0 ;i<n;i++)
        scanf("%d",&ar[i]);

    printf("printing the original array : ");
    for(int i =0 ;i<n;i++)
        printf("%d ",ar[i]);
    

    mergeSort(ar,0,n-1);

    printf("\nprinting the sorted array : ");
    for(int i =0 ;i<n;i++)
        printf("%d ",ar[i]);
    
    return 0;
}