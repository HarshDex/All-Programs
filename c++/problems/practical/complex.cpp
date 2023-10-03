#include <bits/stdc++.h>
using namespace std;
class complex1
{
    int r;
    int i;
    public:
        complex1(){}
        complex1(int r,int i){
            this->r = r ;
            this->i = i;
        }
        
        complex1 operator/(complex1 c2){
            complex1 c3;
            c3.r = this->r/c2.r;
            c3.i = this->i/c2.i;
            return c3;
        }
        void display(){
            cout<<"complex number : "<<r<<" + "<<i<<"i"<<endl;
        }
};
int main()
{
    int a;int b;
    cout<<"enter the value of c1.r : ";cin>>a;    
    cout<<"enter the value of c1.i : ";cin>>b;    
    complex1 c1(a,b);
    cout<<"enter the value of c2.r : ";cin>>a;    
    cout<<"enter the value of c12.i : ";cin>>b;    
    complex1 c2(a,b);
    complex1 c3 = c1/c2;
    c3.display();
    return 0;
}
