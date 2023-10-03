#include <iostream>
#include<vector>
using namespace std;
void printData(vector<pair<int,int>> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main()
{
    vector<pair<int,int> > v ;
    int n;
    cout<<"enter the number of pairs in the vector : ";
    cin>>n;

    int a,b;
    for(int i =0;i<n;i++)
    {
        cout<<"enter the value of a and b respectively for pair - "<<i+1<<" : ";
        cin>>a>>b;

        v[i].first = a;
        v[i].second = b;
    }

    printData(v);

    return 0;
}
