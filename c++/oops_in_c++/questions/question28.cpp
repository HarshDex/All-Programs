#include <iostream>
using namespace std;
class XYZ
{
 public:
 int x, y, z;
 void Exception(int x, int y){
 while (1)
 {
 cout << "Enter the value of x and y : " << endl;
 cin >> x;
 cin >> y;
 try
 {
 if (y == 0)
 {
 throw 1;
 }
 else
 {
 z = x / y;
 cout << z << endl;
 break;
 }
 }
 catch (int)
 {
 cout << "Denominator Zero Division Error " << endl;
 }
 }
 }
 };
 int main()
 {
 XYZ s;
 int x, y;
 s.Exception(x, y);
 return 0;
 }