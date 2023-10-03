#include <iostream>
using namespace std;
void sort( int ar[],int r,int c=0,int max=0)
{
    if(r==0)
        return;
    if(c<r)
    {
        if(ar[c]>ar[max])
        {
            sort(ar,r,c+1,c);
        }
        else{
            sort(ar,r,c+1,max);
        }
    }
    else{
        int temp;
        temp=ar[max];
        ar[max]=ar[r-1];
        ar[r-1]=temp;
        sort(ar,r-1);
    }

    
}
int main()
{
    int n;
    cout<<"enter the size of the array = ";
    cin>>n;

    int ar[n];
    cout<<"enter the elenents in the array = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    sort(ar,n);

    cout<<"sorted array"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    return 0;
}
