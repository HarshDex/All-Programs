//fibonacci series
#include<iostream>
using namespace std;
void fib(int x)
{
    int a=0,b=1,c;
    for(int i=0;i<=x;i++)
    {
        if(i==0)
            cout<<"0"<<"\t";
        else if(i==1)
            cout<<"1"<<"\t";
        else
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<"\t";
        }
    }
}
int main()
{
    int n;
    cout<<"enter the number to which you want to print the fibonacci series"<<endl;
    cin>>n;
}