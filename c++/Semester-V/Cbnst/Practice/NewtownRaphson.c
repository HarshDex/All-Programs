#include<stdio.h>
#include<math.h>
double f(double x){
    return (x * sin(x)) + cos(x);
}
double f_(double x){
    return x * cos(x);
}
int main(){
    double x0;
    printf("enter the initial root [x0] : ");scanf("%lf",&x0);
    double fx0,f_x0;
    double x1;
    double prev;
    do{
        fx0 = f(x0);
        f_x0 = f_(x0);
        x1 = x0 - fx0/f_x0;
        printf("roots : %lf\n",x1);
        prev = x0;
        x0 = x1;
    }while(fabs(prev-x0) > 0.000001);
    return 0;
}