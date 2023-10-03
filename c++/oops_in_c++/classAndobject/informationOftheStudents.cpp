#include <iostream>
using namespace std;

class student
{
    private:
        char name[50];
        int rollno;
        int age;
       
    public:
        void inputInfo(void)
        {
            cout<<"enter the name of the student ="<<endl;
            cin>>name;
            cout<<"enter the rollno of the student ="<<endl;
            cin>>rollno;
            cout<<"enter the age of the student"<<endl;
            cin>>age;
        }
        void showData(void)
        {
            cout<<"name of the student is ="<<name<<endl;
            cout<<"roll no of the student is ="<<rollno<<endl;
            cout<<"age of the student is ="<<age<<endl;
        }
        
};

int main()
{   
    int x;
    cout<<"enter the number of students in the class ="<<endl;
    cin>>x;
    student s[x];
    for(int i=0;i<x;i++)
    {
        s[i].inputInfo();
    }

    cout<<"***************************************************************************************";

    //printing the information of the student

    for(int i=0;i<x;i++)
    {
        s[i].showData();
        cout<<"\n";
        cout<<"------------------------------------------------------------------------";
        cout<<"\n";
    }

    return 0;
}


