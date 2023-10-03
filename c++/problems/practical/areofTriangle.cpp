#include <bits/stdc++.h>
using namespace std;
class shape
{
    public : 
        int l;
        int b;
        virtual void displayArea() = 0;
};
class triangle : public shape{
    public : 
    void setData(int l,int b){
        this-> l = l;
        this->b = b;
    }
    void displayArea(){
        cout<<"area of the triangle is : "<<0.5*(l*b)<<endl;
    }
};
class rectangle : public shape{
    public : 
    void setData(int l,int b){
        this-> l = l;
        this->b = b;
    }
    void displayArea(){
        cout<<"area of the rectangle is : "<<l*b<<endl;
    }
};
int main()
{
    int a,b,c,d;
    shape *s;
    cout<<"enter the lenght of the rectangle : ";cin>>a;
    cout<<"enter the width of the rectangle : ";cin>>b;
    rectangle r;
    s = &r;

    r.setData(a,b);
    s->displayArea();

    cout<<"enter the height of the triangle : ";cin>>c;
    cout<<"enter the base of the triangle : " ; cin>>d;
    triangle t;
    s = &t;
    t.setData(c,d);
    s->displayArea();

    return 0;
}
