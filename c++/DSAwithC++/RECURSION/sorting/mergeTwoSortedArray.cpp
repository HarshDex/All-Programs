//merge two sorted array so that the resultant array will also be sorted 
#include <iostream>
using namespace std;
void merge(int *ar1,int *ar2,int len1,int len2)
{
    int i =0;
    int j =0;

    int len = len1+len2;
    int ar[len];
    int k =0;
    while(i<len1 && j<len2 )
    {
        if(ar1[i]<=ar2[j])
        {
            ar[k]=ar1[i];
            i++;
            k++;
        }
        else
        {
            ar[k] = ar2[j];
            j++;
            k++;
        }
    }
    while(i<len1)
    {
        ar[k]=ar1[i];
        i++;
        k++;
    }
    while(j<len2)
    {
        ar[k]=ar2[j];
        i++;
        k++;
    }

    cout<<"printing the merged array : "<<endl;
    for(int m =0;m<len;m++)
    {
        cout<<ar[m]<<" ";
    }
}
int main()
{
    int n1,n2;
    cout<<"enter the number of element in array 1 : ";cin>>n1;
    cout<<"enter the number of element in array 2 : ";cin>>n2;
    int ar1[n1];
    int ar2[n2];

    cout<<"enter the elements in array 1 : "<<endl;
    for(int i =0;i<n1;i++)
    {
        cin>>ar1[i];
    }

    cout<<"enter the elements in array 2 : "<<endl;
    for(int i =0;i<n2;i++)
    {
        cin>>ar2[i];
    }

    merge(ar1,ar2,n1,n2);

    return 0;
}
