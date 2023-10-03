// Given an unsorted array of integers, design an algorithm and implement it using a program to find
// whether two elements exist such that their sum is equal to the given key element. (Time
// Complexity = O(n log n))
#include <bits/stdc++.h>
using namespace std;
int position(vector<int> &ar,int s,int e){
    int pivot = ar[s];
    int count = 0;
    for(int i=s+1;i<=e;i++){if(ar[i] < pivot) count++;}
    int pivotIndex = s + count;
    swap(ar[pivotIndex],ar[s]);
    int i =s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(ar[i] < pivot) i++;
        while(ar[j] > pivot) j--;
        while(i < pivotIndex && j > pivotIndex) swap(ar[i++],ar[j--]);
    }
    return pivotIndex;
}
void quickSort(vector<int> &ar,int s,int e){
    if(s>=e) return;
    int pos = position(ar,s,e);
    quickSort(ar,s,pos-1);
    quickSort(ar,pos+1,e);
}
int main()
{
    int n;
    cout<<"enter the number of elements : ";cin>>n;
    vector<int> ar(n);
    cout<<"enter the elements : ";
    for(int i =0;i<n;i++) cin>>ar[i];
    
    cout<<"printing the array before sort : ";
    for(auto it : ar) cout<<it<<" ";
    cout<<endl;

    quickSort(ar,0,n-1);

    int k ;
    cout<<"enter the value of K : ";
    cin>>k;
    
    int i =0;
    int j = n;
    int flag = 0;
    while(i < j){
        int sum = ar[i] + ar[j];
        if(sum == k){
            flag = sum;break;
        }
        else if(sum < k) i++;
        else if(sum > k) j--;
    }

    if(flag == 0)
        cout<<"not found";
    else 
        cout<<"found";


    return 0;
}
