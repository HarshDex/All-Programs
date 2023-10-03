#include <iostream>
#include<vector>
using namespace std;
void printData(vector<int> &v)
{
    static int i =1;
    cout<<"vector -> "<<i<<" : " ;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    i++;
    cout<<endl;
}
int main()
{
    vector<vector<int> > v;
    int N;
    cout<<"enter the number of vectors : ";cin>>N;
    for(int i =0;i<N;i++)
    {
        int n;
        cout<<"enter the number of elements in vector - "<<i+1<<": ";
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cout<<"enter value : ";cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(int i =0;i<v.size();i++)
    {
        printData(v[i]);
    }

    return 0;
}
