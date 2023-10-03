#include <iostream>
using namespace std;
class hello
{
    int a;
    int b;
    public:
    void setData(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    void getData(void)
    {
        cout<<"value of a : "<<a<<endl;
        cout<<"value of b : "<<b<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter the number of objects do you want : ";cin>>n;
    hello *ar = new hello[n];
    hello *temp = ar;
    int a;
    int b;
    for(int i =0;i<n;i++)
    {
        cout<<"enter the values for the "<<i+1<<" - object :"<<endl;
        cout<<"enter the value of a"<<i+1<<" :";cin>>a;
        cout<<"enter the value of b"<<i+1<<" :";cin>>b;
        ar->setData(a,b);
        ar++;
    }
    cout<<"printing the data : "<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<"Printing the data of the "<<i+1<<" object :"<<endl;
        temp->getData();
        temp++;
        cout<<"\n";
    }
    return 0;
}
