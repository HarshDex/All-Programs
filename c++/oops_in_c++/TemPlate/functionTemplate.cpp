#include <iostream>
using namespace std;
template < class T>
T funcAverage(T a,T b)
{
    return (a+b)/2;
}
int main()
{
    float a;
    float b;
    cout<<"enter the value of a and b : ";
    cin>>a>>b;

    cout<<"average of the two number are : "<<funcAverage<float>(a,b);

    return 0;
}
