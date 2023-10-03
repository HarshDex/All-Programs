#include <iostream>
using namespace std;
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

    int min_ind=0;
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[min_ind]>ar[j])
            {
                min_ind=j;
            }
        }
        if(min_ind!=i)
        {
            temp=ar[i];
            ar[i]=ar[min_ind];
            ar[min_ind]=temp;
        }
    }
    cout<<"____________sorted array___________"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    return 0;
}
