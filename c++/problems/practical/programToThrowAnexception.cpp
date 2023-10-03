#include <bits/stdc++.h>
using namespace std;
class myExp : public exception{
    public:
        const char* what(){
            return "invalid string !!";
        }
};

int main()
{
    try{
        string s;
        cout<<"enter the string : ";getline(cin,s);
        if(s == "jai hind" || s == "JAI HIND"){
           cout<<"your string is correct";
        }
        else{
            myExp e;
            throw e;
        }
    }
    catch(myExp e)
    {
        string a = e.what();
        cout<<a;
    }                                                                                                                                               
    return 0;
}
