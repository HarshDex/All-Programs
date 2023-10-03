#include <bits/stdc++.h>
using namespace std;
bool linearSearch(int *ar,int n,int k){
    for(int i =0;i<n;i++){
        if(ar[i] == k) 
            return true;
    }
    return false;
}
int main()
{
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;

    int ar[n];
    cout<<"enter the elements : ";
    for(int i =0;i<n;i++) cin>>ar[i];

    int k;
    cout<<"enter the key which you want to find : ";cin>>k;
    
    if(linearSearch(ar,n,k)) cout<<"element found"<<endl;
    else cout<<"not found"<<endl;

    return 0;
}
