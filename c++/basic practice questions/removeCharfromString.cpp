#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[10];
    cout<<"enter the string = "<<endl;
    cin>>str;

    cout<<"your string = "<<str<<endl;

    char c;
    cout<<"enter the word you want to remove from the string = "<<endl;
    cin>>c;
    


    for(int i=0;i!=strlen(str);i++)
    {
        if(str[i]==c)
        {
            for(int j=i;j<strlen(str);j++)
            {
                str[j]=str[j+1];
            }
        }
    }

    cout<<"edited string is = "<<str<<endl;
    cout<<"final size of the string = "<<strlen(str);


    

    return 0;
}
