#include <iostream>

using namespace std;
int main()
{
    //code for input
    int x;
    cout<<"enter the number = "<<endl;
    cin>>x;
    cout<<x;

    //code for reverse 
    int temp=x;
    int rem =0;
    int sum=0;
    
    while (x>=0)
    {
        rem=x%10;
        sum=sum*10+rem;
    }

    //code for palindrome
    if(sum==temp)
        cout<<"palindrome"<<endl;
    else
        cout<<"not palindrome"<<endl;

    return 0;
}
