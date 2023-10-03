#include <bits/stdc++.h>
using namespace std;
class demo1 : public exception 
{
    int a;
    public : 
        demo1(int a)
        {
            this->a = a;
        }
        const char *what()
        {
            cout<<"error detected !!";
        }
};
int main()
{

    int x;
    int y;
    cin>>x>>y;
    try{
        if(x == 1)
        {
            demo1 d1(x);
            throw d1;
        }
        else{
            cout<<"yo program executed successfully - "<<x/y<<endl;
        }
    }
    catch(demo1 d){
        cout<<d.what()<<endl;
    }

    return 0;
}
