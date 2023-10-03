#include <bits/stdc++.h>
using namespace std;
void printData(vector<int> v)
{
    for(int i = 0;i!= v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
}
int main()
{
    set<vector<int>> s;
    int n;
    cout<<"enter the number of vectors : ";cin>>n;
    for(int i =0;i<n;i++)
    {
        int c;
        cout<<"enter the number of values in vector"<<i+1<<" : ";cin>>c;
        vector<int> temp;
        for(int j =0;j<c;j++)
        {
            int a; 
            cout<<"enter the "<<j+1<<"value for "<<i+1<<" vector : ";cin>>a;
            temp.push_back(a);
        }
        s.insert(temp);
    }

    for(auto it = s.begin();it!=s.end();it++)
    {
        printData(*it);
    }

    return 0;
}
