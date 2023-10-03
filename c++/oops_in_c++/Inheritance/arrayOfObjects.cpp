#include <bits/stdc++.h>
using namespace std;
class hello{
    int a;
    int b;
    public : 
        void setData(int a,int b){
            this->a = a ;
            this->b = b;
        }
        void printData(){
            cout<<"value of a : "<<a<<endl;
            cout<<"value of b : "<<b<<endl;
        }
};
int main()
{
    int n;
    cout<<"enter the number of objects : ";cin>>n;

    int a;
    int b;
    hello ob[n];
    for(int i =0;i<n;i++){
        ob[i];
        cout<<"enter the value of a for object "<<i+1<<" : ";cin>>a;
        cout<<"enter the value of b for object "<<i+1<<" : ";cin>>b;
        cout<<endl;
        ob[i].setData(a,b);
    }
    cout<<"printing the data :->"<<endl;
    for(int i =0;i<n;i++){
        cout<<"object : "<<i+1<<endl;
        ob[i].printData();
        cout<<endl;
    }
    return 0;
}
