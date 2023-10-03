#include <bits/stdc++.h>
using namespace std;
class date{
    public :
    date()
    {
        cout<<"constructor date is created";
    }
};
class time1{
    public : 
    time1()
    {
        cout<<"constructor time is created"<<endl;
    }
};
class train{
    public : 
    date d1;
    time1 t1;
    train(){
        cout<<"constructor is created"<<endl;
    }
};
int main()
{
    date d;
    time1 t;

    return 0;
}

