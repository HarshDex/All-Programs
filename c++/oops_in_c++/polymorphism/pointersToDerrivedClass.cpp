// this is an perfect example of run time polymorphism
#include <iostream>
using namespace std;
class base
{
    public : 
        int a = 10; 
        void display(void)
        {
            cout<<"value of a : "<<a<<endl;
        }
};
class derrived : public base
{
    public:
        int b = 20;
        void display(void)
        {
            cout<<"-----------------------"<<endl;
            cout<<"value of a : "<<a<<endl;
            cout<<"value of b :"<<b<<endl;
        }
};
int main()
{
    base obj1;
    base *ob;
    derrived obj2;
    ob = &obj2;
    ob->display(); //it will call the display function of the base class even through it stores the adress of the derrived class ,this happens because the pointer ob is of the base class so it bind with the function of the base class this is called late binding.
    // ob->b this will through an error.
    // also if we are pointing a derrieved class object from a base class object then we can only acess the members which are inherited.

    // but we can do this
    derrived *ob2;
    ob2 = &obj2;
    ob2->display();
    return 0;
}
