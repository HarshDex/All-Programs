#include <bits/stdc++.h>
using namespace std;
void printData(vector<string> &v)
{
    for(int i =0;i<v.size();i++)
    {
        cout<<"'"<<v[i]<<"'"<<" ";
    }cout<<endl;

}
void solve(string &s,vector<string> &ans,int index,string output)
{
    if(index>=s.length())
    {
        ans.push_back(output);
        return;
    }

    for(int i=index;i<s.length();i++)
    {
        swap(s[index],s[i]);
        output = s; 
        solve(s,ans,index+1,output);
        //backtrack
        swap(s[index],s[i]);
    }
}
vector<string> generatePermutation(string s)
{
    int index = 0;
    string output;
    vector<string> ans;
    solve(s,ans,index,output);
    return ans;
}
int main()
{
    string s;
    cout<<"enter the string : ";
    cin>>s;

    cout<<"printing all of the possible permutation : "<<endl;
    vector<string> v = generatePermutation(s);
    printData(v);
    return 0;
}
