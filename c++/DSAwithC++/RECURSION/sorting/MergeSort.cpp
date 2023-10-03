#include <iostream>
using namespace std;
void Merge(int *arr ,int s,int e)
{
    int mid = (s+e)/2;

    int len1 = mid -s +1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // assing the value to the array we created 
    int k = s;
    for(int i = 0;i<len1;i++)
    {
        first[i]=arr[k++];
    }
    int l = mid+1;
    for(int i = 0;i<len2;i++)
    {
        second[i]=arr[l++];
    }

    //now mergin these two arrays 
    int i =0;
    int j =0;
    int m = s;
    while(i<len1 && j<len2)
    {
        if(first[i]<=second[j])
        {
            arr[m]=first[i];
            i++;
            m++;
        }
        else   
        {
            arr[m]=second[j];
            j++;
            m++;
        }
    }
    while(i<len1)
    {
        arr[m]=first[i];
        i++;
        m++;
    }
    while(j<len2)
    {
        arr[m]=second[j];
        j++;
        m++;
    }

    delete[]first;
    delete[]second;
}
void MergeSort(int *ar,int s,int e)
{
    if(s>=e)
        return;
    
    int mid = (s+e)/2;
    //merging the left array 
    MergeSort(ar,s,mid);
    // merging the right array 
    MergeSort(ar,mid+1,e);

    Merge(ar,s,e);
}
int main()
{
    int n;
    cout<<"enter the number of elements in the array : ";
    cin>>n;

    int ar[n];
    cout<<"enter the elements in the array : "<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    cout<<"printing the unsorted array :"<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }cout<<endl;

    MergeSort(ar,0,n-1);
    cout<<"printing the sorted array : "<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }cout<<endl;

    return 0;
}
