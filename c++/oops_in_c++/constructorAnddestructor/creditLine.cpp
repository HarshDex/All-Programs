#include <iostream>
using namespace std;
class Card
{
    public:
        virtual void check() = 0;
};
class MasterCard : public Card
{
    string  accNo;
    public : 
        MasterCard(string s)
        {
            accNo = s;
        }
        void check()
        {
            int len = accNo.length();
            cout<<"length = "<<len<<endl;
            if(len == 13 || len == 16)
            {
                if(accNo[0]=='4')
                    cout<<"valid card"<<endl;
                else 
                    cout<<"invalid card"<<endl;
            }
        }
};
class Visa : public Card
{
    string  accNo;
    public : 
        Visa(string s)
        {
            accNo = s;
        }
        void check()
        {
            int len = accNo.length();
            cout<<"length = "<<len<<endl;
            if(len == 16)
            {
                if(accNo[0]=='5' && accNo[1] == '1' || accNo[1] == '2' || accNo[1] == '3' || accNo[1] == '4' ||accNo[1] == '5')
                    cout<<"valid card"<<endl;
                else 
                    cout<<"invalid card"<<endl;
            }
        }
};
class AmericanExpress : public Card
{
    string  accNo;
    public : 
        AmericanExpress(string s)
        {
            accNo = s;
        }
        void check()
        {
            int len = accNo.length();
            cout<<"length = "<<endl;
            if(len == 15)
            {
                if(accNo[0]=='3' &&( accNo[1]=='4' || accNo[1]=='7'))
                    cout<<"valid card"<<endl;
                else 
                    cout<<"invalid card"<<endl;
            }
        }
};
int main()
{
    Card *cr;
    int choice;
    int i =1;
    string c,v,m;
    do
    {
        cout<<"enter the type of the card : " <<endl;
        cout<<"\nPress [1] - MasterCard\nPress [2] - Visa\nPress [3] - American Express\n"<<endl;
        cout<<"enter the card type : "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: 
            {
                cout<<"enter the card number : ";
                cin>>c;
                MasterCard ma(c);
                cr = &ma;
                cr->check();
                break;
            }
            case 2:
            {
                cout<<"enter the card number : ";
                cin>>v;
                Visa vi(v);
                cr = &vi;
                cr->check();
                break;
            }
            case 3:
            {
                 cout<<"enter the card number : ";
                cin>>m;
                AmericanExpress ai(m);
                cr = &ai;
                cr->check();
                break;
            }
        }
        cout<<"\nPress[1] if you want to continue \n press[0] if you want to exit";
        cin>>i;
    }while(i==1);

    return 0;
}
