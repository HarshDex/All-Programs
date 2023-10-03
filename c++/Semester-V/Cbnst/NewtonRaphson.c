#include<stdio.h>
#include<math.h>
double f(double x){
    //? for equation : x^3 - 3*x + 1 = 0
    // return (x*x*x)-(3*x)+1;
    //? for equation : x^3 - 48 = 0
    return (x*x*x) - 48;
}
double _f(double x){
    //? derrivative  :  3*x^2 - 3
    // return 3*(x*x) -3;
    //? for derrivative :  3x^2
    return 3 * (x * x);
}
int main(){
    double x0;
    printf("enter the initial root : ");
    scanf("%lf",&x0);
    double prev;
    double x1;
    int i  = 0;
    do{
        double f_x0 = f(x0);
        double f_x_0 = _f(x0);
        x1 = x0 - f_x0/f_x_0;
        printf("root x%d : %lf\n",i++,x1);
        prev = x0;
        x0 = x1;
    }while(fabs(prev-x0) > 0.0001);
    return 0;
}