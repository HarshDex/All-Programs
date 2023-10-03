#include<stdio.h>
#include<stdlib.h>
int solve(int a){
    if(a < 0)
        return 1;
    return solve(a/3) + a;
}
int main()
{
    int a;
    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("solving the value : %d",solve(a));
    return 0;
}