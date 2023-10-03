#include <bits/stdc++.h>
using namespace std;
void insert(int *ar,int value,int index){
    ar[index] = value;
    int i = index;
    while(i > 1){
        int parent = i/2;
        if(ar[parent] < ar[i]){
            swap(ar[parent],ar[i]);
            i = parent;
        }
        else 
            return;
    }
}
int main(){
    int n;
    cout<<"enter the number of elements in the heap : ";
    cin>>n;

    n++;
    int ar[n];
    for(int i = 1;i<n;i++){
        ar[0] = -1;
        int a;
        cout<<"enter the element : ";cin>>a;
        insert(ar,a,i);
    }
    cout<<"elements : ";
    for(int i =1;i<n;i++)
        cout<<ar[i]<<" ";

    return 0;
}
