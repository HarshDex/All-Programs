#include <iostream>
using namespace std;

int  digit(int n)
{
    int temp;
    int sum=0;
    if(n==0)
        return 1;
    
    return n%10 * digit(n/10);
    
}
int main()
{
    int x;
    cout<<"enter the digit = "<<endl;
    cin>>x;

    int i=0;
    int product;
    product=digit(x);
    cout<<product;

    return 0;
}
