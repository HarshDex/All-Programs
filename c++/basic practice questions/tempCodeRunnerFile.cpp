//fibonacci series
#include<iostream>
using namespace std;
void fib(int a);
{
    int a=0,b=1,c;
    for(int i=1;i<=a;i++)
    {
        if(i==0)
            cout<<"0"<<"\t";
        else if(i==1)
            cout<<"1"<<"\t"
        else
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<endl;
        }
    }
}
int main()
{
    int n;
    cout<<"enter the number to which you want to print the fibonacci series"<<endl;
    cin>>n;
    fib(n);
}