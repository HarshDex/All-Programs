#include <iostream>

using namespace std;
int sUm(int n)
{
    if(n==1)
        return 1;

    return n+sUm(n-1);
}
int main()
{
    int n;
    cout<<"enter the number to which you want to add the numbers = ";
    cin>>n;

    int i=0;
    int s;
    while(i<=n)
    {
        s=sUm(n);
        i++;
    }
    cout<<s;

    return 0;
}
