#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin("arr123.txt");
    cout<<"reading from the file "<<endl;
    string word;
    while(fin>>word)
    {
        cout<<word;
        cout<<endl;
    }
    return 0;
}

