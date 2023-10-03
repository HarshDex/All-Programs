#include <iostream>
using namespace std;
class hello
{
    int n;
    public:
    hello(){
        n = 0;
    };
    hello(int a)
    {
        n = a;
    }
    hello(hello &ob1)
    {
        cout<<"constructor is created !!"<<endl;
        n = ob1.n;
    }
    void display()
    {
        cout<<"the number for this object is "<<n<<endl;
    }
};
int main()
{
    hello x,y,z(12);
    x.display();
    y.display();
    z.display();
    hello z1(z); //copy constructor is invoked 
    z1.display();
    //z1 should exactly resemble x,y or z


    
    return 0;
}
