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
        void display(){
            cout<<"value of a : "<<a<<endl;
            cout<<"value of b : "<<b<<endl;
        }
        friend temp operator+(temp,temp);
};
temp operator+(temp t1,temp t2){
    temp t3;
    t3.a = t1.a + t2.a;
    t3.b = t1.b + t2.b;
    return t3;
}
int main()
{
    
    int a;
    int b;
    cout<<"enter the value of a : ";cin>>a;
    cout<<"enter the value of b : ";cin>>b;
    temp t1(a,b);
    cout<<endl;
    cout<<"enter the value of a : ";cin>>a;
    cout<<"enter the value of b : ";cin>>b;
    temp t2(a,b);
    temp t3 = t1+t2;
    t3.display();

    return 0;
}
