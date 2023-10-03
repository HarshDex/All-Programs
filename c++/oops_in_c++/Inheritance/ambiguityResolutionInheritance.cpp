#include <iostream>
using namespace std;
class base1
{
    public:
        void greet(void)
        {
            cout<<"how are you buddy ??"<<endl;
        }
};
class base2
{
    public:
        void greet(void)
        {
            cout<<"kaise ho??"<<endl;
        }
};
class derived : public base1,public base2
{
    public:
        void display( void )
        {
            base1::greet();
        }
        void display2(void)
        {
            base2:: greet();
        }
};
int main()
{
    derived obj;
    base1 a;
    a.greet();
    base2 b;
    b.greet();
    obj.display();
    obj.display2();

    return 0;
}
