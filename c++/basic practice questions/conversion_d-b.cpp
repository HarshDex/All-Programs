//conversion from decimal to binary
//wrong code is written 
//i will rectify it later
#include<iostream>
using namespace std;
int convert(int x)
{
    int a;
    int ar[100];
    int c=1;
    while(x>=0)
    {
       for(int i=0;i<100;i++)
        {
            a=x%2;
            x=x/2;
            ar[i]=a;
            c++;
        }
    }
    for(int i=c;i>=0;i--)
    {
        cout<<ar[i]<<"\t";
    }
}
int main()
{
    int n;
    cout<<"enter a decimal number which you want to convert =";
    cin>>n;
    convert(n);
    return 0;
}