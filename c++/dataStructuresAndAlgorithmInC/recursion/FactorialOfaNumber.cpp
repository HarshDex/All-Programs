#include <iostream>

using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int x;
    cout<<"enter the number = ";
    cin>>x;

    int i=0;
    int a ;
    while(i<=x)
    {
        a=fact(x);
        i++;
    }
    cout<<a;
    return 0;
}