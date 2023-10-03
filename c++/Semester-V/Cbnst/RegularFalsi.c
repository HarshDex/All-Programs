#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//?solving equation : xe^x = cosx
double f(int x){
    return x*exp(x)-cos(x);
}
int main()
{
    double x0;
    printf("enter the initial value of the x0 : ");
    scanf("%lf",&x0);
    double x1;
    printf("enter the initial value of the x1 : ");
    scanf("%lf",&x1);
    // abs(x0-x1) < 0.0001 ? printf("true") : printf("false");
    while(1){
        if(fabs(x1-x0) < 0.0001) break;
        double a = f(x0);
        double b = f(x1);
        double x2 = (x0*b-x1*a)/(b-a);
        printf("%lf",x2);
        double val = f(x2);
        if(val < 0) x1 = val;
        else x0 = val;
    }
    return 0;
}

