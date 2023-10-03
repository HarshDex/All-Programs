#include <iostream>
using namespace std;
//this is the head recursion 
int count(int n)
{
    if(n == 0)
        return 0;
    count(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout<<"enter the number upto which you want to print the counting : ";cin>>n;

    int c = count(n);

    return 0;
}
