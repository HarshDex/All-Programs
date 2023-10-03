#include <iostream>
using namespace std;
int fib(int n)
{
    
    if(n==0 || n==1)
        return n;
    else
        return fib(n-1)+fib(n-2); //recursion relation
   
}

int main()
{
    int n;
    cout<<"enter the number where you want to print the series = ";
    cin>>n;

    int i=0;
    while(i<=n)
    {
        cout<<" "<<fib(i);
        i++;
    }
    return 0;
}
