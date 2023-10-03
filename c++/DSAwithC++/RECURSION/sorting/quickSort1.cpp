#include <bits/stdc++.h>
using namespace std;
void printData(int *ar,int n)
{
    for(int i =0;i<n;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
}
int position(int *ar,int s ,int e)
{
    int pivot = ar[s];
    int count = 0;
    for(int i = s+1;i<e;i++)
    {
        if(ar[i] == pivot)
            break;
        count ++;
    }
    int pivotIndex = s + count ;
    swap(pivot,ar[pivotIndex]);
    int i = s;
    int j = e;
    while(ar[i] < pivot)
        i++;
    while(ar[j] > pivot)
        j--;
    while(i < pivotIndex && j > pivotIndex){
        swap(ar[i],ar[j]);
        i++;
        j--;
    }
}
void quickSort(int *ar,int s,int e)
{
    if(s >= e)
        return;
    int p = position(ar,s,e);
    quickSort(ar,s,p-1);
    quickSort(ar,p+1,e);   
}
int main()
{
    int n;
    cout<<"enter the number of element : ";
    cin>>n;
    int ar[n];

    cout<<"enter the element : ";
    for(int i =0;i<n;i++)
        cin>>ar[i];
    
    cout<<"priting the data before sorting : ";
    printData(ar,n);

    cout<<"printing the data after sorting : ";
    quickSort(ar,0,n-1);
    printData(ar,n);

    return 0;
}
