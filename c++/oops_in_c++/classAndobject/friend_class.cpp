//properties of friend function 
/*
    1- not in the scope of class .
    2-since it is not in the scope of the class, so cannot be called from the object of the 
    class .
    3-can be invoked without the help of any object .
    4- usually contains the objects as arguments.
    5-can be declared inside pubic or private sections of the class .
    6- It cannot acess the members directly by the name and need object_name dot member_name 
    to aceses any member . 
*/

#include <iostream>
using namespace std;

class f
{
    friend f sumofComplex(f o1,f o2);
    private:
       int a;
       int b;
    public:
        
        void someComplex(int x , int y)
        {
            a=x;
            b=y;
        }
        void showComplex(void)
        {
            cout<<"your complex number is ="<<a<<" + "<<b<<"i"<<endl;
        }     
};

f sumofComplex(f o1,f o2)
{
    f o3;
    o3.someComplex((o1.a +o2.a),(o1.b+o2.b));
    return o3;
}


int main()
{
    f n1,n2,sum;
    n1.someComplex(1,2);
    n1.showComplex();
    n2.someComplex(3,4);
    n2.showComplex();

   sum = sumofComplex(n1,n2);
    sum.showComplex();



    return 0;
}

