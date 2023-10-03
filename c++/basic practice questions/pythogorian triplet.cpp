//pythogorian triplet
#include<iostream>
#include<math.h>
using namespace std;
void check(int p,int b,int h)
{
    if(pow(h,2)==pow(p,2)+pow(b,2))
    {
        cout<<"pythogorian triplet";
    }
    else
        cout<<"not pythogorian triplet";
    
    return;
}
int main()
{
    int a,b,c;
    cout<<"enter the height"<<endl;
    cin>>a;
    cout<<"enter the base"<<endl;
    cin>>b;
    cout<<"enter the hypotenuse"<<endl;
    cin>>c;
    check(a,b,c);
    return 0;

}
