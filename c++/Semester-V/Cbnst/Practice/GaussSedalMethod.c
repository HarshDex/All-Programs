#include<stdio.h>
#include<math.h>
double f(double y,double z){
    return (1/27)*(85-(6*y-z));
}
double g(double x,double z){
    return (1/15)*(72-(6*x+z));
}
double h(double x,double y){
    return (1/54)*(110-(x+y));
}
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
    double x = 0;double y = 0;double z = 0;
    double prevx,prevy,prevz;
    double fx,fy,fz;
    int i =0;
    do{
        i++;
        fx = f(y,z);prevx = x;x = fx;
        fy = g(x,z);prevy = y;y = fy;
        fz = f(x,y);prevz = z;z = fz; 
    }while(i < 5);
    printf("value of x : %lf\n",x);
    printf("value of y : %lf\n",y);
    printf("value of z : %lf\n",z);
    return 0;
}