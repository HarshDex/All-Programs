#include <iostream>
using namespace std;
// static int sum =0;
int add(int ar[],int n)
{
    if(n <=0)
        return 0;
    else
        return add(ar,n-1)+ar[n-1];
}      
int main()
{
    int n;
    cout<<"enter the number of elements : ";cin>>n;

    int ar[n];
    cout<<"enter the elements : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>ar[i];
    }

    cout<<"sum of the two numbers is : " <<add(ar,n);

    return 0;
}
