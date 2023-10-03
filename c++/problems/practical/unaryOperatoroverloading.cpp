#include <bits/stdc++.h>
using namespace std;
class temp
{
    int a; 
    public : 
        temp(int a)
        {
            this->a = a;
        }
    temp &operator++(){
        a++;
        return *this;
    }
    temp operator++(int demo)
    {
        temp d3 = *this;
        ++(*this);
        return d3;
    }
    void display()
    {
        cout<<"value of a : "<<a<<endl;
    }
};
int main()
{
    int a;
    cout<<"enter the value of a : ";cin>>a;
    temp d(a);

    d.display();
    (++d).display();

    (d++).display();
    d.display();

    return 0;
}
