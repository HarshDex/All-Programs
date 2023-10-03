#include <bits/stdc++.h>
using namespace std;
void printData(string s)
{
    stringstream hello(s);
    string word;
    while(hello>>word)
    {
        reverse(word.begin(),word.end());
        cout<<word<<" ";
    }
}
int main()
{
    string s;
    cout<<"enter the string : ";
    getline(cin,s);
    printData(s);
    return 0;
}
