#include <bits/stdc++.h>
using namespace std;
class temp{
    int a;
    int b;
    public : 
        temp(){}
        temp(int a,int b){
            this->a = a;
            this->b = b;
        }
        temp operator++(){
            a++;
            b++;
            return *this;
        }
        temp operator++(int d){
            temp x = *this;
            this->a++;
            this->b++;
            return x;

        }
        void display(){
            cout<<"value of a : "<<a<<endl;
            cout<<"value of b : "<<b<<endl;
        }
};
int main()
{
    int a;
    int b;
    cout<<"enter the value of a and b : ";cin>>a>>b;
    temp ob(a,b);
    ob.display();
    (++ob).display();
    (ob++).display();
    ob.display();
    return 0;
}
