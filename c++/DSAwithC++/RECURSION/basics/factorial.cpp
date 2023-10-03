#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n == 0)
        return 1;
    return n*factorial(n-1);
    //if we do not write the base condition then we get segmentation fault 
}
int main()
{
    int n;
    cout<<"enter number : ";cin>>n;
    int fact = factorial(n);
    cout<<"factorial of "<<n<<" is : "<<fact<<endl;
    return 0;
}
