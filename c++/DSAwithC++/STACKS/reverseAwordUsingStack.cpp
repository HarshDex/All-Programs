#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"enter the string : ";cin>>s;

    stack<char> sp;

    for(int i = 0;i<s.length();i++){
        char ch = s[i];
        sp.push(ch);
    }

    cout<<sp.size()<<endl;

    string ans = "";

    while(!sp.empty())
    {
        char ch = sp.top();
        sp.pop();
        ans.push_back(ch);
    }

    cout<<sp.size()<<endl;

    cout<<"your string : "<<s<<endl;
    cout<<"reversed string : "<<ans<<endl;
    return 0;
}
