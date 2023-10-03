#include <iostream>
using namespace std;

class pdata
{
    private:
        int a,b,c;
        char name[50];
        void function(void);
       
    public:
        void getData();
        void showData();
        
};

void pdata :: getData(void)
{
    cout<<"enter the numbers ="<<endl;
    cin>>a>>b>>c;
    cout<<"enter the name ="<<endl;
    cin>>name;
}

void pdata :: showData(void)
{
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<"name of the pdata is = "<<name<<endl;
}

int main() 
{
    pdata x;
    x.getData();

    cout<<"here is the information you want to acess "<<endl;
    
    x.showData();
     return 0;
}
