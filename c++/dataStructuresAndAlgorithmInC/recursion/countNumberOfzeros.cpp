#include <iostream>

using namespace std;
int helper(int n,int c)
{
    int rem;
    if(n==0)
        return c;
    
    rem=n%10;
    if(rem==0)
        return helper(n/10,c++);
    
    return helper(n/10,c);
}
int digit(int n)
{
   int c=0;
   return helper(n,c);
  
}
int main()
{
    int x;
    cout<<"enter the digit = "<<endl;
    cin>>x;

    int count =0 ;
    int a = digit(x);

    cout <<"number of zeros in the digit are = "<<a;
    return 0;
}
