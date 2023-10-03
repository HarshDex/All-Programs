//subsequence
#include <bits/stdc++.h>
using namespace std;
void printData(vector<string> &v)
{
    for(int i =0;i<v.size();i++)
    {
        cout<<"'"<<v[i]<<"'"<<" ";
    }
    cout<<endl;
}

void solve(string s,vector<string> &ans,string output,int index)
{
    if(index >= s.length())
    {
    //     if(index > 0)
    //     {
    //     }
        ans.push_back(output);
        return;
    }

    //for exclude
    solve(s,ans,output,index+1);

    //for include
    char element =s[index];
    output.push_back(element);
    solve(s,ans,output,index+1);
}

vector<string> subSet(string s)
{
    string output;
    vector<string> ans;
    int index =0;
    solve(s,ans,output,index);
    return ans;
}

int main()
{
    string s;
    cout<<"enter the string : ";
    cin>>s;

    cout<<"printing all the sub sequences : "<<endl;
    vector<string> vs = subSet(s);

    printData(vs);
    
}