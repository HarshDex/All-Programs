#include <bits/stdc++.h>
using namespace std;
void printData(vector<int> &v){
    for(auto &it : v){
        cout<<it<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the number of elements ";
    cin>>n;

    vector<int> v;
    cout<<"enter the values : \n";
    for(int i =0;i<n;i++){
        int a;
        cout<<"enter element : ";cin>>a;
        v.push_back(a);
    }
    cout<<"before reverse : ";
    printData(v);
    cout<<endl;

    cout<<"after reverse : ";
    reverse(v.begin(),v.end());
    printData(v); 
    return 0;
}
