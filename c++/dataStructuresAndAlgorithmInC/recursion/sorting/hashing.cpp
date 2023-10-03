#include <bits/stdc++.h>
using namespace std;
void printData(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}
void heapify(vector<int> &v,int n,int index)
{
    int largest = index;
    int l = 2*n+1;
    int r = 2*n+2;
    if(l < n && v[l] > v[largest])
        largest = l;
    if( r< n && v[r] > v[largest])
        largest = r;
    if(largest != index)
    {
        swap(v[index],v[largest]);
        heapify(v,n,largest);
    }
}
void heapSort(vector<int> &v)
{
    int n = v.size();
    for(int i =n/2-1;i>=0;i--)
        heapify(v,n,i);
    
    for(int i = n-1;i>=0;i--)
    {
        swap(v[0],v[i]);
        heapify(v,i,0);
    }
}
int main()
{
    vector<int> v;
    int n;
    cout << "enter the number of elements : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cout << "enter the element : ";
        cin >> a;
        v.push_back(a);
    }

    cout<<"unsorted array : ";
    printData(v);
    heapSort(v);
    cout<<"sorted array : ";
    printData(v);

    return 0;
}
