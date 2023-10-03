#include<iostream>
using namespace std;
int main()
{
    for(int date=1;date<=30;date++)
    {
        if(date%2==0)
            continue;
        cout<<"you can go outside!!"<<endl;
    }
}