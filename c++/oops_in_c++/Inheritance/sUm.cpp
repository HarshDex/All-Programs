#include <iostream>
using namespace std;
class base1
{
    protected :
        int a;
    public:
        void setdata(int a)
        {
            this->a = a;
        }
};
class base2
{
    protected:
        int b;
    public:
        void setData(int b)
        {
            this->b = b;
        }
};
class derived : public base1 , public base2
{
    int c;
    public:
        derived()
        {
            c = a+b;
        }
        void display(void)
        {
            cout<<"value of a is = "<<a<<endl;
            cout<<"value of b is = "<<b<<endl;
            cout<<"sum of the two numbers is = "<<a+b<<endl;
        }
};

int main()
{
    derived yes;
    int x,y;
    cout<<"enter the value of x = ";
    cin>>x;
    cout<<"enter the value of y = ";
    cin>>y;
    yes.setdata(x);
    yes.setData(y);
    yes.display();
    cout<<"thankyou"<<endl;
    return 0;
}
