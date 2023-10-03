#include <iostream>
using namespace std;
class base1
{
protected:
    int a;

public:
    base1()
    {
        cout << "Inside base 1 constructor" << endl;
        a = 10;
    };
    ~base1()
    {
        cout<<"Insider base 1 destructor"<<endl;
    }
    void greet(void)
    {
        cout << "Goodmorning" << endl;
        cout << "value of a : " << a << endl;
    }
    base1(int a)
    {
        this->a = a;
    }
};
class base2
{
protected:
    int b;

public:
    base2()
    {
        b = 20;
        cout << "Inside base 2 constructor" << endl;
    };
    ~base2()
    {
        cout<<"Inside base 2 destructor"<<endl;
    }

    void greet(void)
    {
        cout << "Subh prabhat" << endl;
        cout << "value of b : " << b<<endl;
    }
    base2(int b)
    {
        this->b = b;
    }
};
class derrived : public base1, public base2
{
    int c;

public:
    derrived(int c)
    {
        this->c = c;
    }
    void display(void)
    {
        base1::greet();
    }
    void display2(void)
    {
        base2::greet();
    }
};
int main()
{
    derrived d(5);
    d.display();
    d.display2();
    return 0;
}
