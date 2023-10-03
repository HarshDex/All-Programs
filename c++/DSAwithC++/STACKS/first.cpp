#include <iostream>
#include<stack>
using namespace std;
void printData(stack<int> s)
{
    for(int i =0;!s.empty();i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main()
{
    int n;
    cout<<"enter the number of element you want to push in the stack : ";cin>>n;
    stack<int> s;
    for(int i =0;i<n;i++)
    {
        int x;
        cout<<"enter value : ";cin>>x;
        s.push(x);
    }

    cout<<"printing the data in the stack"<<endl;
    printData(s);

    return 0;
}
