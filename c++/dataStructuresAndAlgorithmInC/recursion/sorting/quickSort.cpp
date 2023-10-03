#include <iostream>
using namespace std;
void sort(int ar[],int low,int high)
{
    if(low>=high)
        return;

    int s=low;
    int e=high;

    int mid=(s+e)/2;
    int pivot=ar[mid];

    while(s<=e)
    {
        while(ar[s]<pivot)
        {
            s++;
        }
        while(ar[e]>pivot)
        {
            e--;
        }
    }
    if(s<=e)
    {
        int temp=ar[s];
        ar[s]=ar[e];
        ar[e]=temp;
        s++;
        e--;
    }
    //recursion call 
    sort(ar,low,e);
    sort(ar,s,high);

}
int main()
{
    int n;
    cout<<"enter the number of elements in the array = "<<endl;
    cin>>n;
    
    int ar[n];
    cout<<"enter the elements in the array = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"unsorted array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }


    sort(ar,0,n-1);

    cout<<"\nsorted array "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }

    return 0;
}
