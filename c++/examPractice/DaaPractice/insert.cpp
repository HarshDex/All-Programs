#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &v){
    for(int i =1;i<v.size();i++){
        int key = v[i];
        int j = i-1;
        while(j>=0 && v[j] >= key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}
int main()
{
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter the elements : ";

    for(int i =0;i<n;i++)cin>>v[i];

    cout<<"before sorting : ";
    for(int i =0;i<n;i++) cout<<v[i]<<" ";

    insertionSort(v);

    cout<<"\nafter sorting : ";
    for(int i =0;i<n;i++) cout<<v[i]<<" ";


    return 0;
}
