#include<stdio.h>
#include<stdlib.h>
int c = 0;
void merge(int *ar,int s,int e){

    int mid = (s+e)/2;

    int n1 = mid-s+1;
    int n2 = e-mid;

    int ar1[n1];
    int ar2[n2];

    int k = s;

    for(int i =0 ;i<n1;i++)
        ar1[i] = ar[k++];
    
    int l = mid+1;
    for(int i = 0;i<n2;i++)
        ar2[i] = ar[l++];

    int i =0;
    int j = 0;
    int m = s;

    while(i < n1 && j < n2){
        if(ar1[i] <= ar2[j]){
            ar[m] = ar1[i];
            i++;m++;c++;
        }
        else{ 
            ar[m++] = ar2[j++];
            c++;
        }           
    }
    while(i<n1){
        ar[m] = ar1[i];
        m++;
        i++;
    }
    while(j<n2){
        ar[m] = ar2[j];
        m++;
        j++;
    }
}
void mergeSort(int *ar,int s,int e){
    if(s >=e)
        return;
    int mid = (s + e)/2;
    mergeSort(ar,s,mid);
    mergeSort(ar,mid+1,e);
    merge(ar,s,e);
}
int main()
{
    int n;
    printf("enter the number of element : ");
    scanf("%d",&n);

    int ar[n];
    printf("enter the element : ");
    for(int i =0 ;i<n;i++)
        scanf("%d",&ar[i]);
    
    printf("printing the original array : ");
    for(int i =0 ;i<n;i++)
        printf("%d ",ar[i]);
    

    mergeSort(ar,0,n-1);

    printf("\nprinting the sorted array : ");
    for(int i =0 ;i<n;i++)
        printf("%d ",ar[i]);
    
    printf("\nnumber of comparision : %d",c);

    return 0;
}