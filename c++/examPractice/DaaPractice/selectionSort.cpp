#include <bits/stdc++.h>
using namespace std;
void selectionSort(int *ar,int n){
    int min =0;
    for(int i =0;i<n;i++){
        min = i;
        for(int j = i;j<n;j++){
            if(ar[j] < ar[min])
                min = j;
        }
        swap(ar[i],ar[min]);
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

    selectionSort(ar,n);

    cout<<endl<<"after sorting : ";
    for(int i =0;i<n;i++) cout<<ar[i]<<" ";



    return 0;
}
