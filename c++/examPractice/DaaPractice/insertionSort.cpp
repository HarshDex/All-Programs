#include <bits/stdc++.h>
using namespace std;
void insertionSort(int *ar,int n){
    for(int i =1;i<n;i++){
        int key = ar[i];
        int j = i-1;
        while(j>=0 && ar[j] >= key){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = key;
    }
}
int main()
{
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;

    int ar[n];
    cout<<"enter the elements : ";
    for(int i =0;i<n;i++) cin>>ar[i];

    cout<<"before sorting : ";
    for(int i =0;i<n;i++) cout<<ar[i]<<" ";

    insertionSort(ar,n);

    cout<<endl<<"after sorting : ";
    for(int i =0;i<n;i++) cout<<ar[i]<<" ";

    return 0;
}
