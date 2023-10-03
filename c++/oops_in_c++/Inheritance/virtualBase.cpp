#include <iostream>
using namespace std;
class A
{
    public:
        int a;
        void get(int a)
        {
            this->a = a;
        }
        void say(void)
        {
            cout<<"value of a : "<<a<<endl;
            cout<<"say hello in class A!!"<<endl;
        }
};
class B : virtual public A
{
    public:
        int b;
        void get(int b)
        {
            this->b = b;
        }
        void say(void)
        {
            cout<<"value of a : "<<a<<endl;
            cout<<"value of b : "<<b<<endl;
            cout<<"say hello in class B!!"<<endl;
        }

};
class C : virtual public A
{
    public:
        int c;
        void get(int c)
        {
            this->c = c;
        }
        void say(void)
        {
            cout<<"value of a : "<<a<<endl;
            cout<<"value of c : "<<c<<endl;
            cout<<"say hello in class C!!"<<endl;
        }

};
class D :public C,public B
{
    public:
        int d;
        void get(int d)
        {
            this->d = d;
        }
        void get1(int x)
        {
            A::get(x);
        }
        void get2(int x)
        {
            B::get(x);
        }
        void get3(int x)
        {
            C::get(x);
        }
        void say(void)
        {
            cout<<"value of a : "<<a<<endl;
            cout<<"value of b : "<<b<<endl;
            cout<<"value of c : "<<c<<endl;
            cout<<"value of d : "<<d<<endl;
            cout<<"say hello in class D!!"<<endl;
        }
        void say1(void)
        {
            A::say();
        }
        void say2()
        {
            B::say();
        }
        void say3()
        {
            C::say();
        }
};
int main()
{
    D d;
    d.get1(1);
    d.get2(2);
    d.get3(3);
    d.get(4);

    d.say1();
    d.say2();
    d.say3();
    d.say();



    return 0;
}
;
