#include <bits/stdc++.h>
using namespace std;
void countSort(int *ar,int n){
    int temp[n];
    int max = ar[0];
    for(int i =0;i<n;i++){
        if(ar[i] > max)
            max = ar[i];
    }
    int freq[max] = {0};
    for(int i =0 ;i<n;i++) freq[ar[i]]++;

    //updating the frequency array
    for(int i =1;i<=max;i++) 
        freq[i] += freq[i-1];
 
    for(int i = n-1;i>=0;i--){
        temp[freq[ar[i]] - 1] = ar[i];
        freq[ar[i]]--;
    }

    for(int i =0;i<n;i++) 
        ar[i] = temp[i];
}
int main(){
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;

    int ar[n];
    cout<<"enter the elements : ";
    for(int i =0;i<n;i++) cin>>ar[i];

    cout<<"before sorting : ";
    for(int i =0;i<n;i++) cout<<ar[i]<<" ";

    countSort(ar,n);

    cout<<endl<<"after sorting : ";
    for(int i =0;i<n;i++) cout<<ar[i]<<" ";

    return 0;
}
