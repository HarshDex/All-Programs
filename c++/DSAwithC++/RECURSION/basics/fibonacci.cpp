#include <iostream>
using namespace std;
int fib(int n)
{
    if(n ==0)
        return 0;
    if(n == 1)
        return 1;
    int ans = fib(n-2)+fib(n-1);
    return ans;
}
int main()
{
    int n;
    cout<<"enter the number upto which you want to print the fibonacci number : ";cin>>n;
    for(int i =0;i<n;i++)
    {
        cout<<fib(i)<<" ";
    }
    return 0;
}
