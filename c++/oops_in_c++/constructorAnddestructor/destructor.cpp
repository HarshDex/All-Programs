#include <iostream>
using namespace std;
//destructor never takes an argument and never returns a value 
class num
{
    public:
        num()
        {
            cout<<"constructor is created"<<endl;
        }
        ~num()
        {
            cout<<"destructor is invoked"<<endl;
        }
};
int main()
{
    num n1;
    {
        cout<<"entering into the block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"again constructor is envoked for object number 2 and 3 "<<endl;
        cout<<"exiting from the block"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;

    return 0;
}
