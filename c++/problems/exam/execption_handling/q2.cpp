#include <bits/stdc++.h>
using namespace std;
class A{
    public:
        int a;
        A(int a){
            this->a = a;
        }
        virtual void display(){
            cout<<"value of a : "<<a;
        }
};
class B : public A{
    public :
        int b;
        B(int a,int b):A(a){
            this->b = b;
        }
        void display(){
            cout<<"value of b : "<<b;
        }
};
int main()
{
    A *a;
    int x;
    int y;
    cout<<"enter x and y respectively : ";cin>>x>>y;
    B b(x,y);
    a = &b;
    a->display();

    return 0;
}
