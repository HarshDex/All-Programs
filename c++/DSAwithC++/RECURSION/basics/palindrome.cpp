#include <iostream>
#include<string>
using namespace std;
void reverse(string &s,int i, int j)
{
    if(i>j)
        return;
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}
int main()
{
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    
    string st = s;
    reverse(s,0,s.length()-1);
    if(st == s)
        cout<<"palindrome";
    else
        cout<<"not palindrome";

    return 0;
}
