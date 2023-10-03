#include <bits/stdc++.h>
using namespace std;
bool primeOrNot(vector<int> num){
   
}
int main(){
    int n;
    cout<<"enter the count of numbers: ";cin>>n;
    vector<int> num(n);
    for(int i =0;i<n;i++)cin>>num[i];
    if(primeOrNot(num) == false) cout<<"not prime";
    else cout<<"prime";
    return 0;
}
