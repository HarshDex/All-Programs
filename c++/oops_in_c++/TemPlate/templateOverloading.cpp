#include <iostream>
using namespace std;
template <class T>
class harsh
{
    T num;
    public:
        harsh(T num)
        {
            this->num = num;
        }
        void display(void);
};
template <class T>
void harsh<T>::display(void)
{
    cout<<"value of num is : "<<num<<endl;
}

// this is a normal funciton
void func(int a)
{
    cout<<"I am first func() "<<a<<endl;
}

//this is template overloading 
template <class T>
void func(T a)
{
    cout<<"I am templatised func() "<<a<<endl;
}
int main()
{
    harsh <string>ob1("harsh");
    ob1.display();
    func(1);    //exact match takes the highest priority
    func<float>(3.22);
    return 0;
}
