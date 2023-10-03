#include <iostream>
using namespace std;
int pow1(int b,int p)
{
    if(p == 1)
        return b;
    p--;
    return b*pow1(b,p);
}
int main()
{
    int base;
    cout<<"enter the base : ";
    cin>>base;

    int power;
    cout<<"enter the power : ";
    cin>>power;

    int n = pow1(base,power);
    cout<<"value = "<<n;

    return 0;
}
