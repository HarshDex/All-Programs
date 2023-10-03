//this is also the wrong code but i will correct it once my logic will become strong 
#include<iostream>
#include<math.h>
using namespace std;
void convert(int x)
{
    int ar[10];
    int i=0;
    int a;
    int c=0;
    while(x>=0)
    {
        ar[i]=x%10;
        x=x/10;
        c++;
    }
    for(int k=0;k<c/2;k++)
    {
        int temp=ar[k];
        ar[k]=ar[c];
        ar[c]=temp;
        c--;
    }
    int o[c];
    cout<<"conversion of decimal to octal"<<endl;
    for(int i=0;i<c;i++)
    {
        o[i]=ar[i]*pow(8,i);
        cout<<o[i];
    }
}
int main()
{
    int n;
    cout<<"enter the decimal number which you want to convert into octal ="<<endl;
    cin>>n;
    convert(n);
}