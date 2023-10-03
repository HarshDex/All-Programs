#include<stdio.h>
#include<math.h>
int jumpSearch(int *ar,int n,int key){
    int l;
    int h;
    for(int i = 0;i<n;i=i*2){
        if(i == 0)
            i++;
        if(ar[i] <= key)
            l = i;
        else if(ar[i] >= key){
            h = i;
            break;
        }
    }
    int j;
    for(j = l;j<h;j++){
        if(ar[j] == key)
            return 1;
    }
    if(j < h)
        return 0;
}
int main(){
    int n;
    printf("enter the number of elements in array : ");
    scanf("%d",&n);

    int ar[n];
    printf("enter the elements : ");
    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);
    
    int k;
    printf("enter the element which you want to search : ");
    scanf("%d",&k);

    if(jumpSearch(ar,n,k) == 1)
        printf("element found");
    else 
        printf("element not found");


    return 0;
}