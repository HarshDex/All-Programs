#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double f(int x){
    //? for equation x^3 - x - 4
    return x*x*x - x -4;
}
int main(){
    double a;
    double b;
    printf("enter the first root : ");
    scanf("%lf",&a);
    printf("enter the second root : ");
    scanf("%lf",&b);
    int count;
    while(1){
        if(fabs(a-b) < 0.001) break;
        double x1 = (a + b)/2;
        printf("roots : %lf\n",x1);
        double val = f(x1);
        if(val < 0) a = x1;
        else b = x1;
    }
    return 0;
}