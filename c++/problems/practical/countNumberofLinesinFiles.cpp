#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    ofstream f("A:\\c++\\problems\\practical\\sample1234.txt");
    cout<<"wnat you want to write in the file : ";
    getline(cin,s);
    f<<s;

    f.close();
    ifstream fin("A:\\c++\\problems\\practical\\sample1234.txt");
    // cout<<"reading from the file : ";
    char ch;
    // fin.get(ch);
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch <= 97 && ch >= 122)
        {
            ch = toupper(ch);
            cout<<ch;
        }
        if(ch <= 65 && ch>=90)
        {
            ch = tolower(ch);
            cout<<ch;
        }
    }   
}
