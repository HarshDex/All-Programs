#include <bits/stdc++.h>
using namespace std;
bool isParenthesis(char ch)
{
    if(ch == '(' || ch == ')')
        return true;
    return false;
}
bool isOpen(char ch){
    if(ch == '(')
        return true;
    return false;
}
int main()
{
    string str;
    cout<<"enter the expression : ";cin>>str;

    stack<char> s;

    char ch;

    for(int i = 0;i<str.length();i++)
    {
        ch = str[i];
        if(isParenthesis(ch))
        {
            if(isOpen(ch)){
                s.push(ch);
            }
            else    
                s.pop();
        }
    }

    if(s.empty())
        cout<<"expression is balanced"<<endl;
    else
        cout<<"expression is not balanced!!"<<endl;
    


    return 0;
}
