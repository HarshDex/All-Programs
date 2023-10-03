#include <iostream>
using namespace std;
void triangle(int r,int c)
{
    if(r==0)
    {
        return;
    }
    if(c<r)
    {
        cout<<" * ";
        triangle(r,c+1);
    }
    else
    {
        cout<<"\n";
        triangle(r-1,0);
    }
}
void triangle2(int r,int c)
{
    if(r==0)
    {
        return;
    }
    if(c<r)
    {
        triangle2(r,c+1);
        cout<<" * ";
    }
    else
    {       
        triangle2(r-1,0);
        cout<<"\n";
    }
}
int main()
{
    int r,c;
    cout<<"enter rows & columns = "<<endl;
    cin>>r>>c;
    triangle2(r,c);
    triangle(r,c);
    return 0;
}

