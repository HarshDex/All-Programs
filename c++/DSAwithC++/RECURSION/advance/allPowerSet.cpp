#include <bits/stdc++.h>
using namespace std;
void printData(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
}
void solve(vector<int>& v,vector<int>&output,int index,vector<vector<int>> &ans)
{
    if(index >= v.size())
    {
        ans.push_back(output);
        return;
    }

    solve(v,output,index+1,ans);
    int element = v[index];
    output.push_back(element);
    solve(v,output,index+1,ans);
}
vector<vector<int>> powerSet(vector<int> &v)
{
    int index = 0;
    vector<vector<int>> ans;
    vector<int> output;
    solve(v,output,index,ans);
    return ans;
}

int main()
{
   int n;
   cout<<"enter the number of elements : ";cin>>n;

   vector<int> v;

    cout<<"enter the elements in the array : "<<endl;
    for(int i =0;i<n;i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    vector<vector<int>> pSet = powerSet(v);

    cout<<"printing the powersets : "<<endl;
    for(int i =0;i<pow(2,n);i++)
    {
        printData(pSet[i]);
    }

    return 0;
}
