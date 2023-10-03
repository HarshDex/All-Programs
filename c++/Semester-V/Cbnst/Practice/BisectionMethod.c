#include<stdio.h>
#include<math.h>
double f(double x){
    return x*x*x - x - 4;
}
int main(){
    double x0;
    double x1;
    printf("enter the initial root [x0] : ");scanf("%lf",&x0);
    printf("enter the initial root [x1] : ");scanf("%lf",&x1);
    double x2;
    while(1){
        if(fabs(x1-x0) < 0.0001) break;
        x2 = (x0 + x1)/2;
        printf("root : %lf\n",x2);
        double val = f(x2);
        if(x2 < 0) x0 = x2;
        else x1 = x2;
    }
    return 0;
}