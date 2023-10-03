#include<stdio.h>
#include<math.h>
double f(double x){
    return cos(x)-3*x+1;
}
double g(double x){
    return (cos(x)+1)/3;
}
int main(){
    double x0;
    printf("enter the initial guess : ");
    scanf("%lf",&x0);
    double prev;
    double x1;
    int n;int i = 0;
    printf("enter the maximum number of iteration : ");
    scanf("%d",&n);
    do{
        x1 = g(x0);
        printf("root : %lf\n",x1);
        prev = x0;
        x0 = x1;
        i++;
    }while(fabs(prev-x0) > 0.0001 && i < n);
    return 0;
}