#include<iostream>
using namespace std;
template<class X> void sum(X a)
{
 cout<<"Value of a is : "<<a<<endl;
}
template<class X, class Y, class Z> void sum(X b , Y c, Z d)
{
 cout<<"Value of b is : "<<b<<endl;
 cout<<"Value of c is : "<<c<<endl;
 cout<<"Value of d is : "<<d<<endl;
}
int main()
{
 sum(6,2.5f,4);
}