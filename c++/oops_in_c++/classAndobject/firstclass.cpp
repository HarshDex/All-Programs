#include <iostream>
using namespace std;

class employee
{
    private:
        int a,b,c;
    public:
        void put_data(int a1 ,int b1 ,int c1 );
        void get_data()
        {
            cout<<"number 1 is  "<<a<<endl;
            cout<<"number 2 is  "<<b<<endl;
            cout<<"number 3 is  "<<c<<endl;
        }
};

void employee :: put_data(int a1,int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    employee harsh;
    int q,w,e;
    
    cout<<"enter the numbers"<<endl;
    cin>>q>>w>>e;

    harsh.put_data(q,w,e);
    harsh.get_data();


    return 0;
}
