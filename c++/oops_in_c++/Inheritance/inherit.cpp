#include <iostream>
using namespace std;
class employee
{
    public:
    int id;
    float salary;
        employee(int iD)
        {
            id = iD;
            salary = 123;
        }
        employee(){};
};
//Derrived class syntax 
/*
class {{derived-class-name}} : {{visiblity-mode}} {{base class}}
{
    class method/members/etc...
}

Note:
1 - Default visiblity mode is private.
2 - Private visiblity mode : Public members of the base class becomes private member of the derived class.
3 - public visiblity mode : Public members of the base class remains public member of the derived class.
4 - Private members will never inherited .

*/


//creating a programmer class from employee base class 

class programmer : employee{
    public:
    programmer(int Infid)
    {
        id = Infid;
    }
    int programCode = 9;
    void getData()
    {
        cout<<"id is = "<<id;
    }

};


int main()
{
    employee harsh(1),rohan(2);
    cout<<"salary of the employee"<<" 1 is "<<harsh.salary<<endl;
    cout<<"salary of the employee"<<" 2 is "<<rohan.salary<<endl;
    programmer skillf(10);
    cout<<skillf.programCode<<endl;
    skillf.getData();


    return 0;
}
