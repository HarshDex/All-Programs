#include<stdio.h>
#include<math.h>
double f(double x){
    // ? for equation cosx = 3x-1 
    return (cos(x) + 1)/3;
}
int main(){
    double x0;
    printf("enter the value of the initial root x[0] : ");scanf("%lf",&x0);
    double x1;
    int i =0;
    do{
        x1 = f(x0);
        printf("\nroots : %lf",x1);
        x0 = x1;
    }while(i++ < 5);
    return 0;
}