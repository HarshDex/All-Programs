#include <bits/stdc++.h>
using namespace std;
void printData(map<string,int> &m){
    for(auto &it : m){
        cout<<(it).first<<" "<<(it).second<<endl;
    }cout<<endl;
}
int main()
{
    map<string,int> m;
    int n;
    cout<<"enter the number of strings : ";cin>>n;
    for(int i = 0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    printData(m);
    return 0;
}
