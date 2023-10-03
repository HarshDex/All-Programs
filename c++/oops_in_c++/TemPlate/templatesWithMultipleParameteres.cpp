#include <iostream>
using namespace std;
template <class m1, class m2 , class m3> // templates parameter can be more than two 
class multi
{
    public : 
        m1 data1;
        m2 data2;
        m3 data3;
        multi(m1 d1,m2 d2, m3 d3)
        {
            data1 = d1;
            data2 = d2;
            data3 = d3;
        }
        void display(void)
        {
            cout<<"value of data 1 is : "<<data1<<endl;
            cout<<"value of data 2 is : "<<data2<<endl;
            cout<<"value of data 3 is : "<<data3;
        }
};
int main()
{
    multi <int,string,char> ob1(1,"hello",'c');
    ob1.display();
    return 0;
}
