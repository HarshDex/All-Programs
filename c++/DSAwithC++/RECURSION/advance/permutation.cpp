#include <bits/stdc++.h>
using namespace std;
void printData(vector<string> &v)
{
    for(int i =0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
}
void solve(vector<string> &v, string output,int index, string &s,int length)
{
    if(index >= length)
    {
        v.push_back(output);
        return;
    }
    for(int i = index;i<length;i++)
    {
        swap(s[index],s[i]);
        output = s;
        solve(v,output,index+1,s,length);
        swap(s[index],s[i]); 
    }
}
vector<string> permutation(vector<string> v,string s)
{
    string output;
    int index = 0;
    int l = s.length();
    solve(v,output,index,s,l);
    return v;
}
int main()
{
    string s;
    cout<<"enter the string : ";
    cin>>s;
    vector<string> v;
    v = permutation(v,s);
    printData(v);
    return 0;
}
