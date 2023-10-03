#include <iostream>
using namespace std;
class base
{
    public : 
        int a ;
        virtual void display(void)  // this is very important 
        {
            cout<<" 1- value of a : "<<a<<endl;
        }
};
class derrived : public base 
{
    public : 
        int b;
        void display(void)
        {
            cout<<" 2- value of a : "<<a<<endl;
            cout<<" 2 -value of b : "<<b<<endl;
        }
};
int main()
{
    int x, y;
    cout<<"enter the value of a and b respectively : ";
    cin>>x>>y;
    base obj1;
    derrived obj2;
    base *ob;
    ob = &obj2;
    ob->a = x;
    obj2.b = y;

    ob->display();

    return 0;
}
