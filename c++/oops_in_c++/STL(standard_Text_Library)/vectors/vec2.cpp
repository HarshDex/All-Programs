#include <iostream>
#include<vector>
using namespace std;
void printdata(vector<int> &v)
{
    for(int i =0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}   
int main()
{
    vector<int> v(10);
    v.push_back(5);
    printdata(v);
    v.pop_back();
    printdata(v);

    vector<int> &v2 = v;
    printdata(v2);
    for(int i =0;i<v2.size();i++)
    {
        int a;
        cout<<"enter value : ";cin>>a;
        v2[i] = a;
    }
    printdata(v);
    printdata(v2);
    

    return 0;
}
