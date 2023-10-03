//shallow and deep copy 
#include <bits/stdc++.h>
using namespace std;
class temp{
    int a;
    int b;
    public : 
        temp(){}
        // temp(int a,int b){
        //     this-> a = a;
        //     this->b = b;
        // }
        void setData(int a,int b){
            this->a =a ;
            this->b = b;
        }
        // temp(temp &ob){
        //     a = ob.a;
        //     b = ob.b;
        // }
        void printData(){
            cout<<"value of a : "<<a<<endl;
            cout<<"value of b : "<<b<<endl;
        }
};
int main()
{
    temp a;
    a.setData(2,3);
    temp b;
    b = a;
    b.printData();

    return 0;
}
