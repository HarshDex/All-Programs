#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double f(double x){
    //? for equation x^3 - x - 1
    return (x*x*x)-x-1;
}
int main(){
    double x0;printf("enter the initial root [x0] : ");scanf("%lf",&x0);
    double x1;printf("enter the initial root [x1] : ");scanf("%lf",&x1);
    double fx0 = f(x0);
    double fx1 = f(x1);
    double fx2;
    int l = 2;
    do{
        double x2 = (x0*f(x1) - x1*f(x0))/(f(x1) - f(x0));
        printf("roots : %lf\n",x2);
        fx2 = fabs(f(x2));
        printf("f(x%d) = %lf\n\n",l++,fx2);
        fx0 = fx1;
        fx1 = f(x2);
        x0 = x1;
        x1 = x2;
    }while(fx2 > 0.00001);
    return 0;
}