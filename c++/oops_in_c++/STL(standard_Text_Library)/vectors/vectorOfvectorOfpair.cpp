#include <iostream>
#include<vector>
using namespace std;
void printData(vector<pair<int,string>> &v)
{
    static int i =1;
    cout<<"vector -> "<<i<<" : "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    i++;
    cout<<endl;
}
int main()
{
    vector<vector<pair<int,string>>> v;
    int N;
    cout<<"enter the number of vector : ";cin>>N;
    for(int i =0;i<N;i++)
    {
        int n;
        cout<<"enter the number elements in vector "<<i+1<<" : ";
        cin>>n;
        int rollNo;
        string name;
        vector<pair<int,string>> temp;
        for(int j=0;j<n;j++)
        {
            cout<<"student "<<i+1<<" : "<<endl;
            cout<<"enter RollNo : ";
            cin>>rollNo;
            cout<<"enter Name : ";
            cin>>name;
            temp[i] = make_pair(rollNo,name);
        }
        v.push_back(temp);
    }

    for(int i= 0;i<v.size();i++)
    {
        printData(v[i]);
    }
    return 0;
}
