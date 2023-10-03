//diamond problem
#include <bits/stdc++.h>
using namespace std;
class A{
    public:
        int a; 
        A(int a){
            this->a = a;
        }
        void display(){
            cout<<"value of a : "<<a<<endl;
        }
};
class B :virtual public A{
    public:
        int b;
        B(int a,int b):A(a){
            this->b = b;
        }
        void display(){
            cout<<"value of b : "<<b<<endl;
        }
};
class C :virtual public A{
    public : 
        int c;
        C(int a,int c):A(a){
            this->c = c;
        }
        void display()
        {
            cout<<"value of c : "<<c<<endl;
        }
};
class D : public B , public C{
    public : 
        int d;
        D(int a,int b, int c , int d):A(a),B(a,b),C(a,c){
            this->d = d;
        }
        void display(){
            A::display();
            B::display();
            C::display();
            cout<<"value of d : "<<d;
        }
};

int main()
{
    int a,b,c,d;
    cout<<"enter the value of a: ";cin>>a;
    cout<<"enter the value of b : ";cin>>b;
    cout<<"enter the value of c : ";cin>>c;
    cout<<"enter the value of d : ";cin>>d;

    D d1(a,b,c,d);
    d1.display();
    return 0;
}
