#include <iostream>
using namespace std;
void sort(int arr[],int n)
{
    int temp=0;
    int index;
    for(index=0;index<n;index++){
        if(arr[index]>arr[index+1]){
            temp=arr[index];
            arr[index]=arr[index+1];
            arr[index+1]=temp ;
        }
    }
    if(n-1>1)
        sort(arr,n-1);
            
}

int main()
{
    int n;
    cout<<"enter the number of elements in the array = ";
    cin>>n;

    int ar[n];
    cout<<"enter the elements in the array = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    sort(ar,n);

    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
