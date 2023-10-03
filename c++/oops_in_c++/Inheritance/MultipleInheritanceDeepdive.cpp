#include <iostream>
using namespace std;
class father 
{
    protected:
        int age;
        int salary;
    public:
        void setData(int,double);
        void getData(void);
};
void father :: setData(int age , double salary)
{
    this->age = age;
    this->salary = salary;
}
void father ::getData(void)
{
    cout<<"age of father is "<<age<<endl;
    cout<<"salary of father is "<<salary<<endl;
}
class mother
{
    protected:
        int age;
        int salary;
    public :
        void set_data(int,double);
        void get_data(void);
};
void mother :: set_data(int age , double salary)
{
    this->age = age;
    this->salary = salary;
}
class child : public father ,public mother 
{   
    int age3;
    public:
        child(){};
        child(int age)
        {
            this->age3 = age;
        }
        void display(void)
        {
            cout<<"age of the children is "<<age3<<endl;
            cout<<"Child's parents details :->"<<endl;
            getData();
            get_data();
        }    

};
int main()
{
    cout<<"enter the age of the children = ";
    int a;
    cin>>a;
    child harsh(a);
    harsh.set_data(51,1000000);
    harsh.setData(57,2000000);
    harsh.display();
    cout<<"thankyou"<<endl;
    return 0;
}
