#include<stdio.h>
#include<stdlib.h>
int shift=0;
int comp = 0;
void insertSort(int *ar,int n){
    for(int i = 0;i<n;i++){
        int key = ar[i];
        int j = i-1;
        while(j >= 0 && ar[j] > key){
            shift++;
            comp++;
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = key;
        shift++;
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

    insertSort(ar,n);
    
    printf("\nsorted array : ");
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);

    printf("\ntotal number of comparisions : %d\n",comp);
    printf("total number of shifts : %d",shift);

    return 0;
}