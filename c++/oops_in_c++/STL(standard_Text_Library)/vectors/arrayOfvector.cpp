#include <iostream>
#include<vector>
using namespace std;
void printData(vector <int> &v)
{
    cout<<"Size : "<<v.size()<<endl;
    cout<<"vector : ";
    for(int i =0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int N;
    cout<<"Enter the number of N : ";
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++)
    {
        int n;
        cout<<"enter the number of element in "<<i+1<<" vector : ";cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cout<<"enter value : ";
            cin>>x;
            v[i].push_back(x);
        }
    }

    cout<<"Printing array of vectors : "<<endl;
    for(int i =0;i<N;i++)
    {
        printData(v[i]);
    }

    return 0;
}
