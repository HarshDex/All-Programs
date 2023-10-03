#include <iostream>
using namespace std;
class number
{
    int a ;
    public:
    number(){
        a=0;
    };
    number (int x)
    {
        a = x;
    }
    void printData(){
    cout<<"Entered number is = "<<a<<endl;
    }
};
int main()
{
    number x,y,z(10);
    x.printData();
    y.printData();
    z.printData();

    return 0;
}
