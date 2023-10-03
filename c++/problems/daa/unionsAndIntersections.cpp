#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"enter the size of the first array : ";cin>>n;
    vector<int> a;
    cout<<"enter the size of the third array : ";cin>>m;
    vector<int> b;
    int x;
    cout<<"enter the values in array 1 : ";
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    cout<<"enter the values in array 2 : ";
    for(int i = 0;i<m;i++){
        cin>>x;
        b.push_back(x);
    }

    set<int> s;
    int i =0;
    int j = 0;
    while(i<a.size() && j<b.size()){
        s.insert(a[i++]);
        s.insert(b[j++]);
    }
    while(i<a.size()) s.insert(a[i++]);
    while(j<b.size()) s.insert(b[j++]);

    vector<int> intersec;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++) if(a[i] == b[j]) intersec.push_back(a[i]);
    }

    cout<<"union : ";
    for(auto it : s){
        cout<<it<<" ";
    }cout<<endl;
    cout<<"intersection : ";
    for(auto it : intersec){
        cout<<it<<" ";
    }cout<<endl;
   
    return 0;
}
