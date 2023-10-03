#include <bits/stdc++.h>
using namespace std;
class ageExp : public exception{
    public :
        const char* what(){
            return "you can't work !!";
        }
};
int main()
{
    try{
        int age;
        cout<<"enter the age of the student : ";cin>>age;
        if(age < 18)
        {
            ageExp e;
            throw e;
        }
        else 
            cout<<"nice you can work !!";
    }
    catch(ageExp e){
        string s = e.what();
        cout<<s;
    }

    return 0;
}
