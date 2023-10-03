#include <iostream>

using namespace std;
class employee
{
    private:
        int id;
        int salary;
    public:
        int money;
        void setid(void);
        void getid(void);
};

void employee :: setid(void)
{
    salary = 1000;
    cin>>id;
}
void employee :: getid(void)
{
    cout<<"id of the employee is = "<<id<<endl; 
}
int main()
{
    employee ig[5];
    for(int i=0;i<5;i++)
    {
        ig[i].setid();
        ig[i].getid();
    }
    
    employee harsh;
    harsh.money=1000;
    

    return 0;
}
