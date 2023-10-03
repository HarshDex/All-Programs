//overloading of a function
#include <bits/stdc++.h>
using namespace std;
class Harsh{
    int a;
    int b;
    public : 
        Harsh(){}
        Harsh(int a,int b){
            this->a = a ;
            this->b = b;
        }
        Harsh operator+(Harsh ob1){
            Harsh ob;
            ob.a = this->a + ob1.a;
            ob.b = this->b + ob1.b;
            return ob;
        }
        void display(){
            cout<<"value of a : "<<a<<endl;
            cout<<"value of b : "<<b<<endl;
        }
};
int main()
{
    Harsh ob1(1,2);
    Harsh ob2(3,4);
    Harsh ob3 = ob1+ob2;
    ob3.display();
    return 0;
}
