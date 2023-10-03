#include <iostream>
#include <exception>
using namespace std;
class Mine:public exception
{
 public :
 const char * what()const throw()
 {
 return " Denominator Zero Division Error ";
 }
};
int main()
{
 int x,y,z;
 cout<<"Enter the value of x and y "<<endl;
 cin>>x;
 cin>>y;
 try
 {
 if(y==0)
 {
 Mine m;
 throw m;
 }

 else
 {
 z=x/y;
 cout<<"the value of z= "<<z<<endl;
 }
 }
 catch(Mine e){
 cout<<e.what();
 }
}
