//paranthesis matching 
#include<bits/stdc++.h>
using namespace std;
static int c=0;
static int d =0;
bool isOpen(char c)
{
    if(c == '(')
    {
        c++;
        return true;
    }
}
bool isClose(char c)
{
    if(c == ')')
    {
        d++;
        return true;
    }
}

int main()
{
    stack<char> s;

    string e;
    cout<<"enter the expression : ";cin>>e;

    for(int i =0;i<e.length();i++)
    {
        if(isOpen(e[i]))
            s.push(e[i]);
        if(isClose(e[i]))
        {
            s.top();
            s.pop();
        }
    }

    if(c == d)
        cout<<"It is a balanced expression"<<endl;
    else 
        cout<<"It is not a balanced expression"<<endl;



    //checking if the expression is balanced or not 
    

    return 0;
}
