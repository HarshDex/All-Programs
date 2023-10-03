#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int *ar,int n){
    for(int i =0;i<n-1;i++){
        int min =i;
        for(int j = i+1;j<n;j++){
            if(ar[j] < ar[min])
                min = j;
        }
        swap(&ar[i],&ar[min]);
    }
}
int main()
{
    int n;
    printf("enter the number of elements in array : ");
    scanf("%d",&n);

    int ar[n];
    printf("enter the elements : ");
    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);

    printf("unsorted array : ");
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);

    
    selectionSort(ar,n);

    printf("\nsorted array : ");
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);

    return 0;
}