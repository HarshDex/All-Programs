#include <bits/stdc++.h>
using namespace std;
class con{
    string s;
    public : 
    con(string s){
        this->s =s;
    }
    string operator +(con c2){
        string sum;
        sum = this->s + c2.s;
        return sum;
    }
};
int main()
{
    string a;
    string b;
    cout<<"enter the number part : ";cin>>a;
    cout<<"enter the string part : ";cin>>b;
    con c1(a);
    con c2(b);
    string sum;
    sum = c1+c2;
    cout<<sum;
    int num  = 1123;
    // cout<<to_string(num);
    return 0;
}
