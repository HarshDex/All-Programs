#include<stdio.h>
#include<stdlib.h>
void insertionSort(int *ar,int n){
    int key;
    for(int i = 1;i<n;i++){
        key = ar[i];
        int j = i-1;
        while(j >= 0 && key < ar[j]){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = key;
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

    insertionSort(ar,n);
    
    printf("\nsorted array : ");
    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);
    
    return 0;
}