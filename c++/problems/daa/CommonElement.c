#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the number of element in array 1 : ");
    scanf("%d",&n);

    int m;
    printf("enter the number of element in array 2 : ");
    scanf("%d",&m);

    int ar1[n];
    for(int i=0;i<n;i++) scanf("%d",&ar1[i]);
    int ar2[m];
    for(int j=0;j<m;j++) scanf("%d",&ar2[j]);

    int ar3[n+m];
    int i =0;
    int j = 0;
    int k =0;
    while(i < n && j < m){
        if(ar1[i] == ar2[j]){
            ar3[k] = ar1[i];
            i++;k++;
        }
        else if(ar1[i]<ar2[j]) i++;
        else j++;
    }
    printf("Common elements are : ");
    for(int i =0;i<k;i++)
        printf("%d ",ar3[i]);
    
    return 0;
}