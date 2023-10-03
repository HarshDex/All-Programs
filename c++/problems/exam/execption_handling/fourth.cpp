#include <bits/stdc++.h>
using namespace std;
int main()
{
    fstream f;
    f.open("sam.dat",ios::out | ios::in);
    string name;
    cout<<"enter name : ";cin>>name;
    f<<name;
    int n;
    cout<<"enter your age : ";
    cin>>n;
    cin.ignore();
    f<<n<<endl;

    //reading from the file : 
    string name1;
    f>>name;
    cout<<name<<endl;
    cin.ignore();

    f>>n;
    cout<<n<<endl;


    return 0;
}
