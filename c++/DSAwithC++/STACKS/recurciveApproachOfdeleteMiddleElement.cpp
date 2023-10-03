#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to delete middle element of a stack.
    void solve(stack<int>&s , int count , int size){
        if(count == size /2 ){
            s.pop();
            return;
        }
        int num = s.top();
        s.pop();
        solve(s,count+1,size);
        s.push(num);
        
    }   
    void deleteMid(stack<int>&s, int size){
        int count = 0;
        solve(s,count,size);
    }
};
int main()
{
    int n;
    cout<<"enter the size of the stack : ";cin>>n;

    stack<int> s;
    cout<<"enter the elements in the stack "<<endl;
    for(int i =0;i<n;i++)
    {
        int a;
        cout<<"enter element : ";cin>>a;
        s.push(a);
    }

    cout<<"deleting the middle element : "<<endl;
    Solution ob;
    ob.deleteMid(s,n);

    cout<<"printing the updated stack : ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}
