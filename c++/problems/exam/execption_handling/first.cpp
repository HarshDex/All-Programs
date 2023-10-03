#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int y;
    cout<<"enter the value of x and y respectivly : ";cin>>x>>y;
    try{
        if(x == 1)
            throw 1;
        if(y == 0)
            throw " attempt to devide by zero ";
        cout<<"enter the value of y : ";
        cin>>y;
        cout<<"quotient : "<<x/y<<endl;
    }
    catch(const char* e){
        cout<<e<<endl;
    }
    catch(...){
        cout<<"error occured !!"<<endl;
        }
    return 0;
}
