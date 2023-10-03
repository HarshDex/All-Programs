#include <bits/stdc++.h>
using namespace std;
string solve(string s){
    unordered_map<char,int> count;
    queue<char> q;
    string ans = "";
    
    for(int i = 0;i<s.length();i++){
        char ch = s[i];

        count[ch]++;
        q.push(ch);

        while(!q.empty()){
            if(count[q.front()] > 1)
                q.pop();
            else
            {
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}
int main()
{
    string s;
    cout<<"enter a string (without a space) : ";
    cin>>s;

    vector<char> ans;

    string str = solve(s);
    cout<<"output string : "<<str<<endl;
    return 0;
}
