#include <bits/stdc++.h>
using namespace std;
int main()
{
    fstream fout("sample123.txt");
    // cout<<"enter the data : ";
    fout<<"this output is stored in the file !!";
    string s;
    fout<<s;
    // int n;
    // cout<<"enter the number of data : ";
    // cin>>n;
    // for(int i =0;i<n;i++)
    // {
    //     int a;
    //     cout<<"enter a : ";cin>>a;
    //     fout<<a;
    // }
    cout<<"reading from the file : ";
    char c;
    int x = 0;
    fout>>c;
    cout<<c;

    
    return 0;
}
