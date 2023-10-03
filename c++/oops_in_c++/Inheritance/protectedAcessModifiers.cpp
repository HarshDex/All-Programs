#include <iostream>
using namespace std;
class base
{
    protected:  
        int a = 20;
    private:
        int b;
};
class derived : private base
{
    public:
        void getData1()
        {
            cout<<"the value of a is = "<<a<<endl;
        }
};
/*
       members         public derivation    private derivation      protected derivation
    private members      not inherited          not inherited           not inherited 
    protected members      private                 private                protected 
    public members         private                 private                protected
*/
int main()
{
    derived d;
    //cout<<d.a; this will not give the result because a is protected here 
    d.getData1(); //we can only access the data of the protected variable through the public function of that class  
    return 0;
}
