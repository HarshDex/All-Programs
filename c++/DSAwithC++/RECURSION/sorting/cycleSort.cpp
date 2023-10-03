#include <bits/stdc++.h>
using namespace std;
void cycleSort(vector<int> &v,int n){
    int i = 0;
    while(i<n){
        int a = v[i] - 1;
        if(v[a] != v[i]){
            swap(v[i],v[a]);
        }
        else
            i++;
    }
}
int main()
{
    int n;
    cout<<"enter the number of elements in the array : ";cin>>n;
    vector<int> v;

    for(int i =0 ;i<n;i++){
        int a;
        cout<<"enter the "<<i+1<<" element : ";cin>>a;
        v.push_back(a);
    }

    cycleSort(v,n);
    cout<<"printing the sorted array : ";
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
