#include <iostream>
using namespace std;
bool Binarysearch(int ar[],int start, int end ,int key)
{
    if(start>end)
        return false;
    int mid = (start + end)/2;
    if(ar[mid] == key)
        return true;
    if(ar[mid]<key)
        return Binarysearch(ar,mid+1,end,key);
    else
        return Binarysearch(ar,start,mid-1,key);
}
int main()
{
    int n;
    cout<<"enter the size of the array : ";cin>>n;

    int ar[n];
    cout<<"enter elements in the array : "<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }

    int k;
    cout<<"enter the element you want to search : ";cin>>k;
    if(Binarysearch(ar,0,n-1,k))
        cout<<"found!!"<<endl;
    else   
        cout<<"not found!!"<<endl;
    return 0;
}
