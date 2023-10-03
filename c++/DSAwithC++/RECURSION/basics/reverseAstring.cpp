#include <iostream>
#include<string>
using namespace std;
//printing the string in the reverse order 
// void reverse(string s,int n)
// {
//     if(s.empty())
//         return;
//     reverse(s.substr(1,n),n-1);
//     cout<<s[0];
// }
// actural reversing the string 
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
    cout<<"Enter the string :";
    getline(cin,s);

    cout<<"Reversing the string : ";
    reverse(s,0,s.length()-1);
    cout<<s;

    cout<<"\nAgain reversing the string : ";
    reverse(s,0,s.length()-1);
    cout<<s;



    return 0;
}
