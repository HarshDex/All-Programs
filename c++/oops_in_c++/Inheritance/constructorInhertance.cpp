#include <iostream>
using namespace std;
class a
{
    public:
    a()
    {
        cout<<"A class constructor"<<endl;
    }
    ~a()
    {
        cout<<"A class destructor"<<endl;
    }
};
class b : public a
{
    public:
    b()
    {
        cout<<"B class constructor"<<endl;
    }
    ~b()
    {
        cout<<"B class destructor"<<endl;
    }
};
class c : public a,public b
{
    public:
    c()
    {
        cout<<"C class constructor"<<endl;
    }
    ~c()
    {
        cout<<"C class destrutor"<<endl;
    }
};
int main()
{
    c c1;
    cout<<"end of the main program !!"<<endl;
    return 0;
}
//virtural base class is very important 
