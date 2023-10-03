#include <bits/stdc++.h>
using namespace std;
class temp{
    int a;
    public : 
        temp(){}
        temp(int a){
            this->a = a;
        }
        void display(){
            cout<<"value of a : "<<a<<endl;            
        }
        istream& operator >>(istream& input){
            input>>a;
            return input;
        }
        // ostream& operator
};
int main()
{
    temp t;
    cin>>t;

    return 0;
}
