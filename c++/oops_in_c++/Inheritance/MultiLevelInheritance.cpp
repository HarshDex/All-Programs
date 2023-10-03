#include <iostream>
using namespace std;
class student
{
    protected:
        int roll_no;
    public:
        void set_rollNo(int);
        int get_rollNo(void);
};
void  student :: set_rollNo(int a)
{
    roll_no = a ;
}
int student :: get_rollNo(void)
{
    cout<<"roll no. of the student is = "<<roll_no<<endl;
}
class exam : public student
{
    protected:
        float physics;
        float maths;
    public:
        void set_marks(float,float);
        void get_marks(void);
};
void exam :: set_marks(float x,float y)
{
    physics = x;
    maths = y;
}
void exam :: get_marks(void)
{
    cout<<"marks in maths = "<<maths<<endl;
    cout<<"marks in physics = "<<physics<<endl;
}
class result : public exam
{
    float percentage;
    public:
        void display()
        {
            get_rollNo();
            get_marks();
            cout<<"percentage of the student is = "<<(physics+maths)/2<<"%"<<endl;
        }
};
int main()
{
    int a ;
    cout<<"enter the roll no. of the first student = ";
    cin>>a;

    float x,y;
    cout<<"enter the marks in mathematics = ";
    cin>>x;

    cout<<"enter the marks in physics = ";
    cin>>y;

    result harsh;
    harsh.set_rollNo(26);
    harsh.set_marks(y,x);
    harsh.display();


    return 0;
}
