#include<iostream>
using namespace std;
int check(int a)
{
    int count=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    int p;
    cout<<"enter the number = ";
    cin>>n;
    p=check(n);
    if(p==0)
    {
        cout<<"prime number";
    }
    else
        cout<<"not prime";
        