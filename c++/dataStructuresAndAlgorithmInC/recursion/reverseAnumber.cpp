#include <iostream>

using namespace std;
void  digit (int n)
{
     if(n==0)
        return;

    int sum=0;
    int rem=n%10;
    sum=sum*10 +rem;
    cout<<sum;
    digit(n/10);
    
}

int main()
{
    int x;
    cout<<"enter the digit = ";
    cin>>x;

    digit(x);
    


    return 0;
}
