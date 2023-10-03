#include<stdio.h>
#include<stdlib.h>
void printData(int *ar,int n){
    for(int i =0;i<n;i++){
        printf("%d ",ar[i]);
    }printf("\n");
}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int *ar,int i,int j){
    if(i>j)
        return;
    swap(&ar[i],&ar[j]);
    reverse(ar,++i,--j);
}
int main()
{
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);

    int ar[n];
    printf("enter the elements in the array  : \n");
    for(int i =0;i<n;i++){
        printf("enter element : ");
        scanf("%d",&ar[i]);
    }

    printf("printing the array before reverse : ");
    printData(ar,n);

    printf("printing the array after reverse : ");
    reverse(ar,0,n-1);
    printData(ar,n);
    return 0;
}