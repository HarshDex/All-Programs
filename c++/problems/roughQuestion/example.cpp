#include<bits/stdc++.h>
using namespace std;
class base
{
    protected:
        int x;
    public : 
    base(int x)
    {
        this->x = x ;
    }
    virtual void display() = 0;
};
class derrived : public base
{
    int y;
    public : 
    derrived(int x,int y):base(x)
    {
        this->y = y ;
    }
    void display(void)
    {
        cout<<"the value of x : "<<x<<endl;
        cout<<"the value of the y : "<<y<<endl;
    }
};
int main()
{
    base *ob;
    derrived ob1(1,2);
    ob = &ob1;
    ob->display();

  return 0;
}