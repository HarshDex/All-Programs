#include<iostream>
#include<string>
using namespace std;
class A
{
    public : 
    int a;
    string name;
    A(int a,string name)
    {
        this->a = a ;
        this->name = name;
    }
};
class B
{
    A *x;
    public : 
    int b;
    string name;
    B(int b,string name ,A *x)
    {
        this-> b = b;
        this->name = name;
        this->x = x;
    }
    void display(void)
    {
        cout<<"these are the values of A :"<<endl;
        cout<<"value of a = "<<x->a<<endl;
        cout<<"name = "<<x->name<<endl;
        cout<<"these are the values of b :"<<endl;
        cout<<"value of b = "<<b<<endl;
        cout<<"name = "<<name<<endl;
    }
};
int main()
{
    A ob1(1,"harsh");
    B ob2(2,"siddhart",&ob1);
    ob2.display();

}