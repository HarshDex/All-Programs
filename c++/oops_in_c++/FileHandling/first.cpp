//file handling in c++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string data;
    fstream out;
    out.open("sample.txt");
    cout<<"writing to a file : ";
    getline(cin,data);
    out<<data<<endl;
    cout<<"enter your age : ";
    int age;
    cin>>age;
    out<<age<<endl;
    cin.ignore();

    cout<<endl;
    cout<<"reading file from the data"<<endl;
    out>>data;
    cout<<data;
    out>>age;
    cout<<age;
    return 0;
}
