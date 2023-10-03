#include <iostream>
using namespace std;
void printData(int ar[],int size)
{
    cout<<"size of the array : "<<size<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
bool search(int ar[],int n,int key)
{
    printData(ar,n);
    if(n == 0)  
        return false;
    if(ar[0]==key)
        return true;
    else
        return search(ar+1,n-1,key);
}
int main()
{
    int n;
    cout<<"enter the size of the array : ";cin>>n;
    
    int ar[n];
    cout<<"enter the elements in the array "<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }

    int k;
    cout<<"enter the value you want to search : ";cin>>k;

    if(search(ar,n,k))
        cout<<"found!!"<<endl;
    else 
        cout<<"not found!!"<<endl;

    return 0;
}
