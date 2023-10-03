//bubble sort by recursion 
#include <iostream>
using namespace std;
void bubble(int ar[],int n)
{
    if(n == 0 || n== 1)
        return ;
    for(int i =0;i<n-1;i++)
    {
        if(ar[i]>ar[i+1])
            swap(ar[i],ar[i+1]);
    }
    bubble(ar,n-1);
}
int main()
{
    int n;
    cout<<"enter the number of elements in the array : ";
    cin>>n;

    int ar[n];
    cout<<"enter the elements in the array : "<<endl;
    for(int i =0;i<n;i++)
        cin>>ar[i];

    bubble(ar,n);

    cout<<"printing the sorted array : ";
    for(int i =0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}
