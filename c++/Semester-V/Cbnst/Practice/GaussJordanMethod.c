#include<stdio.h>
int main(){
    int n;
    printf("enter the number of equations : ");
    scanf("%d",&n);
    printf("enter the augmented matrix :\n");
    int augmentedMatrix[n][n+1];

    //taking input for the user
    for(int i=0;i<n;i++){
        for(int j =0;j<n + 1;j++){
            scanf("%d",&augmentedMatrix[i][j]);
        }
    }

    //converting augmented matrix into upper triangular matrix
    double ratio;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i!=j){
                ratio = augmentedMatrix[j][i] / augmentedMatrix[i][i];
                for(int k =0;k<n+1;k++){
                    augmentedMatrix[j][k] = augmentedMatrix[j][k] - (augmentedMatrix[i][k]*ratio);
                }
            }
        }
    }
    printf("values for the upper triagular matrix : ");
    for(int i =0;i<n;i++){
        printf("\n");
        for(int j =0;j<n;j++){
            printf("%d ",augmentedMatrix[i][j]);
        }
    }

    // printf("value of x : %lf",augmentedMatrix[0][3]/augmentedMatrix[0][0]);
    // printf("value of y : %lf",augmentedMatrix[1][3]/augmentedMatrix[1][1]);
    // printf("value of z : %lf",augmentedMatrix[2][3]/augmentedMatrix[2][2]);
    
    return 0;
}