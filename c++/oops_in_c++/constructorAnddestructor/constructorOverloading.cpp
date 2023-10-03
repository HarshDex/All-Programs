#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
    public:
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    complex(int x)
    {
        a= x;
        b=0;
    }
    void printData()
    {
        cout<<a<<" +"<<b<<"i" <<endl;
    }
};

int main()
{
    complex c1(5,4);
    c1.printData();
    
    complex c2(5);
    c2.printData();
}