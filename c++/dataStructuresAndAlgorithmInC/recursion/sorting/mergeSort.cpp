#include <iostream>
using namespace std;
// merging the two sorted array 
void merge(int ar[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int ar1[n1];
    int ar2[n2];
    
    for(int i=0;i<n1;i++)
    {
        ar1[i]=ar[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        ar2[i]=ar[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(ar1[i]<ar2[j])
        {
            ar[k]=ar1[i];
            i++;
        }
        if(ar1[i]>ar2[j])
        {
            ar[k]=ar2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        ar[k]=ar1[i];
            i++;
            k++;
    }
    while(j<n2)
    {
         ar[k]=ar2[j];
            j++;
            k++;
    }

}

// deviding the array into two equal halves
void mergeSort(int ar[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(ar,l,mid);
        mergeSort(ar,mid+1,r);

        merge(ar,l,mid,r);
    }
    
}
// driver code 
int main()
{
    int n;
    cout<<"enter the size of the array = ";
    cin>>n;

    
    int ar[n];
    cout<<"enter the elements in the array = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    cout<<"\nunsorted array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }

    cout<<"\nsorted array"<<endl;
    mergeSort(ar,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }


    return 0;
}
