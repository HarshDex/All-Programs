#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout("arr123.txt");
    cout<<"enter the data which you want to enter in the file : "<<endl;
    string s;
    getline(cin,s);
    fout<<s;

    cout<<"your string has been written successfully!!"<<endl;

    fout.close();

    ifstream fin("arr123.txt");
    cout<<"analyzing the file : "<<endl;
    int countNew = 0;
    int countSpace = 0;
    int countChar = 0;
    char ch;
    while(fin.get(ch)){
        if(ch == '\n'){
            countNew ++;
        }
        if(ch == ' ')
        {
            countSpace++;
        }
        countChar++;
    }

    cout<<"totol number of lines in the file : "<<countNew+1<<endl;
    cout<<"total number of spaces in the file : "<<countSpace<<endl;
    cout<<"total number of character in the file : "<<countChar<<endl;
    fin.close();

    fstream fout;
    fout.open("arr123.txt",ios::app);
    string x;
    cout<<"enter what you want to append : ";
    cin>>x;
    fout<<x;
    fout.close();
    return 0;
}
