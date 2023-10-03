//this is a part of generic programming 
#include <iostream>
using namespace std;
template <class T1 = int , class T2 = float>
class harsh
{
    T1 a;
    T2 b;
    public :
    harsh(T1 x , T2 y)
    {
        a = x;
        b = y;
    }
    void display(void )
    {
        cout<<"value of a is : "<<a<<endl;
        cout<<"value of b is : "<<b<<endl;
    }
};
int main()
{
    harsh <float,float> ob1(5.5,2.3);
    ob1.display();
    return 0;
}
