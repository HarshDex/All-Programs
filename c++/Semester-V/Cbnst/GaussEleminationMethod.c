#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the number of equations : ");
    scanf("%d",&n);

    int augmented_matrix[n][n+1];
    printf("enter the augmented matrix : \n");
    for(int i = 0 ;i<n;i++){
        for(int j =0;j<n+1;j++){
            scanf("%d",&augmented_matrix[i][j]);
        }
    }
    for(int i = 0 ;i<n;i++){
        printf("\n");
        for(int j =0;j<n+1;j++){
            printf("%d ",augmented_matrix[i][j]);
        }
    }
    // for row operation r2->r2-2r1 && r3->r3-r1
    for(int j = 0;j<n+1;j++){
        augmented_matrix[1][j] = augmented_matrix[1][j] - augmented_matrix[0][j];
        augmented_matrix[2][j] = augmented_matrix[2][j] - (2*augmented_matrix[0][j]);
    }

     for(int i = 0 ;i<n;i++){
        printf("\n");
        for(int j =0;j<n+1;j++){
            printf("%d ",augmented_matrix[i][j]);
        }
    }

    
    // for row operation = r3-> 3r2-2r3
    for(int j = 0;j<n+1;j++){
        augmented_matrix[2][j] = (2 * augmented_matrix[2][j]) - (3*augmented_matrix[1][j]);
    }

   
    printf("\n\naugmented matrix after operations :");
    for(int i = 0 ;i<n;i++){
        printf("\n");
        for(int j =0;j<n+1;j++){
            printf("%d ",augmented_matrix[i][j]);
        }
    }
    return 0;
}