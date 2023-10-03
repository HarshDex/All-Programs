#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    string pattern;
    cout<<"enter the string : ";
    cin>>str;
    cout<<"enter the pattern : ";
    cin>>pattern;
    int n = str.length();
    int m = pattern.length();
    int j = 0;
    int flag = 0;
    for(int i =0;i<n-m;i++){
        while(j<m){
            if(str[i+j] != pattern[j]) 
            j++;
            break;
        }
        if(j == m){ 
            cout<<"pattern matched at index : "<<i+j<<endl;
            flag++;
            break;
        }
    }
    if(!flag) cout<<"pattern not found"<<endl;
    return 0;
}
