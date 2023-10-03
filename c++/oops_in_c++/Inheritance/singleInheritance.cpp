#include <iostream>
using namespace std;
class base 
{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};
void base :: setData(void)
{
    data1 = 10;
    data2 = 20;
}

int base :: getData1()
{
    return data1;
}

int base ::getData2()
{
    return data2;
} 
class derived : public base
{
    int data3;
    public:
        int process();
        void display();
};
int derived :: process(void)
{
    data3 = getData1()*data2;
    return data3;
}
void derived :: display(void)
{
    cout<<"the value of data1 is = "<<getData1()<<endl;
    cout<<"the value of data2 is = "<<data2<<endl;
    cout<<"the final value is = "<<process()<<endl;
}
int main()
{
    derived der;
    der.setData();
    der.display();
    return 0;
}

