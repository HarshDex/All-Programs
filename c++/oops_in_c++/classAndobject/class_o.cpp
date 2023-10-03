#include <iostream>
using namespace std;

class item 
{
    private:
        int number;
        float cost;
    public:
        void getdata(int a,float b);
        void putdata(void)
        {
            cout<<"number = "<<number<<endl;
            cout<<"cost = "<<cost<<endl;
        }
};

// member function defination

void item  :: getdata(int a,float b)
{
    number = a;
    cost = b;
}

//main program
int main()
{
    item x;
    cout<<"\nobject : "<<endl;
    x.getdata(100,201.45);
    x.putdata();

    return 0;
}

