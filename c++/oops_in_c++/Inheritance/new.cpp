#include <iostream>
using namespace std;
class parent
{
    protected:
        string name;
    public:
        int a;
        int b;
        void set_data(string,int,int);
        void get_data(void);
};
void parent :: set_data(string name,int a,int b)
{
    this->name = name;
    this->a = a ;
    this->b = b;
}
void parent :: get_data(void)
{
    cout<<"name of parent is = "<<name<<endl;
    cout<<"value of a is = "<<a<<endl;
    cout<<"value of b is = "<<b<<endl;
}

class child : public parent
{
    int c;
    public:
        void set(int);
        void display(void);
};
void child :: set(int c)
{
    this->c = c;
}
void child :: display(void)
{
    cout<<"name of the parent of child is = "<<endl;
    cout<<"value of a is = "<<a<<endl;
    cout<<"value of b is = "<<b<<endl;
    cout<<"value of c is = "<<c<<endl;

}

int main()
{
    parent p;
    string name;
    cout<<"enter the name = "<<endl;
    getline(cin,name);

    int a,b;
    cout<<"enter the value of a and b respectively = "<<endl;
    cin>>a>>b;

    p.set_data(name,a,b);
    p.get_data();

    child c;
    int c1;
    cout<<"enter the value of c: "<<endl;
    cin>>c1;
    c.set(c1);

    c.display();
    return 0;
}
