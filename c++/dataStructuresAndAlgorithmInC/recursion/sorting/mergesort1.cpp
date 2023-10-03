#include <bits/stdc++.h>
using namespace std;
void printData(vector<int> &v)
{
    for(int i =0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
void merge(vector<int> &v,int s,int mid,int e)
{
    vector<int> a;
    vector<int> b;
    for(int i = s;i<=mid-s-1;i++)
        a.push_back(v[i]);
    for(int i =e-mid;i<=e;i++)
        b.push_back(v[i]);
    int l1 = a.size();
    int l2 = b.size();
    int i =0;
    int j = 0;
    int k = s;
    
    while(i< l1 && j < l2)
    {
        if(a[i] <= b[j])
        {
            v[k] = a[i];
            i++;k++;
        }
        if(a[i] > b[j])
        {
            v[k] = b[j];
            j++;k++;
        }
    }
    while(i < l1)
    {
        v[k] = a[i];
        i++;
        k++;
    }
    while(j < l2)
    {
        v[k] = b[j];
        j++;
        k++;
    }
}
void mergeSort(vector<int> &v,int s,int e)
{
    if(s>=e)
        return;
    else
    {
        int mid = s+(e-s)/2 ;
        mergeSort(v,s,mid);
        mergeSort(v,mid+1,e);
        merge(v,s,mid,e);
    }
}
int main()
{
    int n;
    cout<<"enter the number of element : ";
    cin>>n;

    vector<int> v;
    cout<<"enter element : ";
    for(int i =0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    mergeSort(v,0,n-1);
    cout<<"array : ";
    printData(v);
    return 0;
}
