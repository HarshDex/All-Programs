#include <iostream>
using namespace std;
class base1
{
    protected:
        int a;
    public:
        base1(){};
        base1(int a)
        {
            this->a = a;
        }
        void display(void)
        {
            cout<<"class 1"<<endl;
        }
};

class base2
{
    protected:
        int b;
    public:
        base2(){};
        base2(int b)
        {
            this->b = b;
        }
        void display(void)
        {
            cout<<"class 2"<<endl;
        }
};

class derrived: public base1,public base2
{
    int c;
    public:
        derrived(int a,int b,int c):base1(a),base2(b)
        {
            this->c = c;
        }
        void display3(void)
        {
            base1::display();
            cout<<"value of  a : "<<a<<endl;
            base2::display();
            cout<<"value of  b : "<<b<<endl;
            cout<<"class 3"<<endl;
            cout<<"value of  c : "<<c<<endl;
        }
        void display1(void)
        {
            base1::display();
        }
        void display2(void)
        {
            base2::display();
        }
};
int main()
{
    int a,b,c;
    cout<<"Enter the value of a ,b and c"<<endl;
    cin>>a>>b>>c;

    derrived d(a,b,c);
    d.display3();

    return 0;
}
