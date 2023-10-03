#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cout<<"enter the number of elements : ";cin>>n;vector<int> v(n);
    cout<<"enter the elements : ";for(int i =0;i<n;i++)cin>>v[i];
    cout<<"array before sorting : ";for(int i =0;i<n;i++)cout<<v[i]<<" ";sort(v.begin(),v.end());
    cout<<"\narray after sorting : ";for(int i =0;i<n;i++)cout<<v[i]<<" ";
}

