#include <iostream>
using namespace std;

class complex
{
    int a ,b ;
    public:
    /*
        Creating a constructor.
        Constructor is a special member funcion with a same name as of the class.
        It is automatically invoked when an object is created.
        It is used to initialised the object of the class.
    */
    complex(int,int); //construction declaration
    void printData(void)
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
complex::complex(int n1,int n2)
{
    a= n1;
    b= n2;
}

int main()
{
    complex c(1,2);
    c.printData();

    return 0;
}

