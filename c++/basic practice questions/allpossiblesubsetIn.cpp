#include <iostream>
#include<math.h>
using namespace std;
void allPossible(int ar[],int n)
{
    int count = pow(2,n);
    for(int i =0;i<count;i++)
    {
        for(int j= 0;j<n;j++)
        {
            if( (i & (1<<j)) !=0)
                cout<<ar[j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of array : "<<endl;
    cin>>n;
    int ar[n];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i= 0;i<n;i++)
        cin>>ar[i];

    allPossible(ar,n);

    return 0;
}
