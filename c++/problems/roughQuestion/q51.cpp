#include <bits/stdc++.h>
using namespace std;
void printData(vector<int> &v)
{
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
void reverse(vector<int> &v)
{
    int i =0;
    int j = v.size()-1;
    while(i<j)
    {
        swap(v[i],v[j]);
        i++;j--;
    }
}
void rev(vector<int> &v,int n)
{
    int k = n-1;
    int temp;
    for(int i= 0;i<n;i++)
    {
        if(v[i] < 0)
        {
            temp = v[i];
            for(int j =i;j<n-1;j++)
            {
                v[j] = v[j+1];
            }
            v[k] = temp;
            // cout<<temp<<endl;
        }
    }
    reverse(v);
}
int main()
{
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    cout<<"enter the elements : "<<endl;
    vector<int> v;
    for(int i =0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    rev(v,n);
    printData(v);
    return 0;
}
