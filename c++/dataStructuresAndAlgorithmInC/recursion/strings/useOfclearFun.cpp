#include <iostream>
#include<string>

using namespace std;
int main()
{
    //string s;
    //cin>>s;
    //cout<<s;
    //cout<<"\n---"<<endl;
    //s.clear();
   // cout<<"----"<<s;
    //cout<<"enter the string again= "<<endl;
    //getline(cin,s);
    //cout<<"new string is = "<<s<<endl;
    string s ;
    cout<<"enter the string = "<<endl;
    getline(cin,s);
    cout<<"your string is = "<<s<<endl;
    string s2;
    getline(cin,s2);
    s.append(s2);
    cout<<"new string is = "<<s;




    return 0;
}
