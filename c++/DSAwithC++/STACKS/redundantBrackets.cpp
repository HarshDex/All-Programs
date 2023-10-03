#include <bits/stdc++.h>
using namespace std;
bool check(stack<char> s,string str){
    for(int i = 0;i<str.length();i++){ 
        if(str[i] == '(' || str[i] == '+' || str[i] == '*' || str[i] =='-' || str[i] == '/')
        {
            s.push(str[i]);
        }
        else{
            if(str[i] == ')'){
                bool isReduntant = true;
                while(!s.empty()){
                    char top = s.top();
                    if(top ==  '(' || top ==  '+' || top == '*' || top == '-' || top == '/'){
                        isReduntant = false;
                    }
                }
                if(isReduntant == true)
                    return false;
                else
                    return true;
            }
        }
    }
}
int main()
{
    string str;
    cout<<"enter a valid expression  : ";
    cin>>str;

    stack<char> s;

    cout<<"checking if the expression is redundant or not... "<<endl;
    if(check(s,str))
        cout<<"your expression : "<<str<<" does not contains redundant brackets.";
    else
        cout<<"your expression "<<str<<" contains redundant bracket!!"<<endl;
    return 0;
}
