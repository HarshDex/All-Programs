#include <iostream>
#include<string.h>

using namespace std;

class student
{
    private:
        char name[40];
        int id_number;
    public:
        void get_info();
        void show_info();

};

void student :: get_info(char n[],int id,int l)
{
    name[40]=n[l];
    id_number=id;
}

void student :: show_info(void)
{
    cout<<"name is ="<<name<<endl;
    cout<<"id_number is ="<<id_number<<endl;
}
int main()
{
    student s;
    char n[40];
    int id;
    cout<<"enter the student name ="<<endl;
    cin>>n;
    cout<<"enter the student id ="<<endl;
    cin>>id;

    int a=n.length();

    s.get_info(n,id,a);
    s.show_info();

    return 0;

    return 0;
}
