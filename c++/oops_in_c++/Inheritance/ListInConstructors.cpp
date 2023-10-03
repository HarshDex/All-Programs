#include <iostream>
using namespace std;
// syntax for inititialisation list in constructor:   
// constructor(argument -list):initilization-section
// {
//     assignment + other code
// }
class hello
{
    int a;
    int b;
    public : 
        hello(int x,int y):a(x),b(y)
        {
            // cout<<"constructor is called !!"<<endl;
            cout<<"value of a is "<<a<<endl;
            cout<<"value of b is "<<b<<endl;
            cout<<"sum of the number is "<<a+b<<endl;
        }
};
int main()
{
    int a,b;
    cout<<"enter value of a and b "<<endl;
    cout<<"a : ";cin>>a;
    cout<<"b : ";cin>>b;

    hello h(a,b);

    return 0;
}
