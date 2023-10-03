// //? augmented matrix :->
//     // 1 1 1 9
//     // 2 -3 4 13
//     // 3 4 5 40
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number of equations : ");
//     scanf("%d",&n);

//     int augmented_matrix[n][n+1];
//     printf("enter the matrix : \n");
//     for(int i =0;i<n;i++){
//         for(int j =0;j<n+1;j++){
//             scanf("%d",&augmented_matrix[i][j]);
//         }
//     }
//     //converting the matrix into upper triangular matrix
//     int ratio;
//     for(int i =0;i<n;i++){
//         for(int j = 0;j<n;j++){
//             if(j > i){
//                 ratio = augmented_matrix[j][i]/augmented_matrix[i][i];
//                 for(int k=0;k<n+1;k++){
//                     augmented_matrix[j][k] = augmented_matrix[j][k] -  (ratio * augmented_matrix[i][k]);
//                 }
//             }
//         }
//     }

//     //matrix is converted into upper triangular matrix
//     printf("upper triangular augmented matrix : \n");
//     for(int i =0;i<n;i++){
//         printf("\n");
//         for(int j =0;j<n+1;j++){
//             printf("%d ",augmented_matrix[i][j]);
//         }
//     }
   

//     double values[n];
//     values[n-1] = augmented_matrix[n][n-2]/augmented_matrix[n][n-1];
//     for(int i=n;i>=0;i--){
//         values[i] = augmented_matrix[i][n+1];
//         for(int j=i;j<n;j++)
//         {
//             values[i] = values[i] - augmented_matrix[i][j]*values[j];
//         }
//         values[i] = values[i]/augmented_matrix[i][i];
//     }
//     for(int i =0;i<n;i++) printf("values : %lf\n",values[i]);
//     return 0;
// }

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define   SIZE   10
int main()
{
	 float a[SIZE][SIZE], x[SIZE], ratio;
	 int i,j,k,n;
	
	 /* Inputs */
	 /* 1. Reading number of unknowns */
	 printf("Enter number of unknowns: ");
	 scanf("%d", &n);
	 /* 2. Reading Augmented Matrix */
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n+1;j++)
		  {
			   printf("a[%d][%d] = ",i,j);
			   scanf("%f", &a[i][j]);
		  }
	 }
	/* Applying Gauss Elimination */
	 for(i=1;i<=n-1;i++)
	 {
		  if(a[i][i] == 0.0)
		  {
			   printf("Mathematical Error!");
			   exit(0);
		  }
		  for(j=i+1;j<=n;j++)
		  {
			   ratio = a[j][i]/a[i][i];
			   
			   for(k=1;k<=n+1;k++)
			   {
			  		a[j][k] = a[j][k] - ratio*a[i][k];
			   }
		  }
	 }
	 /* Obtaining Solution by Back Subsitution */
	 x[n] = a[n][n+1]/a[n][n];
	
	 for(i=n-1;i>=1;i--)
	 {
		  x[i] = a[i][n+1];
		  for(j=i+1;j<=n;j++)
		  {
		  		x[i] = x[i] - a[i][j]*x[j];
		  }
		  x[i] = x[i]/a[i][i];
	 }
	 /* Displaying Solution */ 
	 printf("\nSolution:\n");
	 for(i=1;i<=n;i++)
	 {
	  	printf("x[%d] = %0.3f\n",i, x[i]);
	 }
	 return(0);
}