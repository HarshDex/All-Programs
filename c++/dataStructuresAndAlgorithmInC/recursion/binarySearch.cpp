//wrong code i will fix it later 
#include <iostream>
using namespace std;
void fun(int a[],int n)
{
    int k;
    cout<<"enter the element you want to search = ";
    cin>>k;

    int i = 0;
    int start = 0;
    int end = n-1;
    int mid;
    int found=0;
    while(1)
    {
        mid=(start+end)/2;
        if(k==a[mid])
        {
            found=1;
            break;
        }
        if (k < a[mid])
            end=mid-1;
        else 
            start=mid+1;      
    }
    if(found == 0)
    {
        cout<<"found!!";
    }
    else
        cout<<"not found!!";


}
int main()
{
    int n;
    cout<<"enter the size of the array = "<<endl;
    cin>>n;

    int ar[n];
    cout<<"enter the elements in the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    

    fun(ar,n);

    return 0;
}

