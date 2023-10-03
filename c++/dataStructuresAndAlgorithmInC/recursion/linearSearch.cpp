#include <iostream>

using namespace std;

bool find(int ar[],int d,int num,int index=0)
{
    if(d==index) 
        if(num==ar[index-1])
            return true ;
        else
            return false;

    return ar[index]==num || find(ar,d,num,index+1);
}
int main()
{
    int n;
    cout<<"enter the size of the array";
    cin>>n;

    int ar[n];
    cout<<"enter the elements in the array - "<<endl;
    for (int i=0;i<n;i++)
        cin>>ar[i];

    int k;
    cout<<"enter the element you want to search";
    cin>>k;

    if(find(ar,n,k)==1)
        cout<<"found!!";
    else
        cout<<"not found!!";        
    return 0;
}
