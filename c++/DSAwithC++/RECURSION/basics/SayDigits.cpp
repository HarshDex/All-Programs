#include <iostream>
using namespace std;
void sayDigit(int n ,string ar[])
{
    if(n ==0)
        return ;
    int digit = n%10;
    n = n/10;
    sayDigit(n,ar);
    cout<<ar[digit];
}
int main()
{
    int n;
    cout<<"enter the digit : ";cin>>n;

    string ar[] = {"zero ","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};

    sayDigit(n,ar);

    return 0;
}
