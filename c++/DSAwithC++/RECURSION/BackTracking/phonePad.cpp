#include <bits/stdc++.h>
using namespace std;
void printData(vector<string> &v)
{
    for(int i =0;i<v.size();i++)
    {
        cout<<"'"<<v[i]<<"'"<<" ";
    }cout<<endl;
}
void solve(string &s,vector<string> &ans,string &output,int index, string mapping[])
{
    if(index>=s.length())
    {
        ans.push_back(output);
        return;
    }

    //for exclude
    int number = s[index]-'0';
    string value = mapping[number];
    for(int i =0;i<value.length();i++)
    {
        output.push_back(value[i]);
        solve(s,ans,output,index+1,mapping);
        output.pop_back();  //by using backtracking
    }
}
vector<string> combination(string s)
{
    string output;
    vector<string> ans;
    int index = 0;
    string mapping[10] = {" ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"," "};
    solve(s,ans,output,index,mapping);
    return ans;
}
int main()
{
    string digits;
    cout<<"     phone keypad\n";
    cout<<"1 -oo  \t2- abc\t3 - def\n4 - ghi\t5 -jkl\t6 - mno\n7 -pqrs\t8 - tuv\t9 - wxyz\n\t0 __  \n";
    cout<<"enter the digits : ";
    cin>>digits;
    cout<<"your choice : "<<digits<<endl;

    vector<string> s = combination(digits);
    cout<<"corresponding combinations : ";
    printData(s);
    return 0;
}
