#include <iostream>
#include<string>
using namespace std;
bool isPalindrome(string s , int i ,int j)
{
    if(i>j)
        return true;
    if(s[i] != s[j])
        return false;
    i++;
    j--;
    return isPalindrome(s,i,j);
}
int main()
{   
    string s;
    cout<<"enter the string : ";
    getline(cin,s);

    if(isPalindrome(s,0,s.length()-1))
        cout<<"It is palindrome"<<endl;
    else
        cout<<"It is not a palindrome"<<endl;

    return 0;
}
