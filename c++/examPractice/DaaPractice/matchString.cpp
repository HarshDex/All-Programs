#include <bits/stdc++.h>
using namespace std;
int match(char *ch,int n,char *pattern,int l){
    int i;
    for(i = 0;i<n;i++){
        int k = i;
        int count = 0;
        for(int j = 0;j<l;j++){
            if(ch[k++] == pattern[j]){
                count++;
            }
        }
        if(count == l)return i;
    }
    return -1;                                                                                              
}
int main(){
    char ch[100];
    cout<<"enter the string : ";
    cin>>ch;

    char pattern[10];
    cout<<"etner the pattern : ";
    cin>>pattern;

    int x = match(ch,strlen(ch),pattern,strlen(pattern));
    if(x == -1){
        cout<<"pattern not found";
    }
    else{
        cout<<"pattern found at index "<<x<<endl;
    }
    return 0;
}
