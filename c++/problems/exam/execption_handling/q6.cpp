#include <bits/stdc++.h>
using namespace std;
class tollBoth{
    public : 
    static unsigned int noOfcars;
    static double moneyGenerated;
        void payingCars(){
            noOfcars++;
            moneyGenerated += 50;
        }
        void nonPayingCars(){
            noOfcars++;
        }
        void getTotalAmmount(){
            cout<<tollBoth::moneyGenerated;
        }
};
static double moneyGenerated = 0;
static unsigned int noOfcars  = 0;

int main()
{
    int n1;
    int n2;
    cout<<"enter the number of paying cars : ";cin>>n1;
    cout<<"enter the number of non paying cars : ";cin>>n2;
    tollBoth t;
    for(int i =0;i<n1;i++)
    {
        t.payingCars();
    }
    for(int i =0;i<n1;i++)
    {
        t.nonPayingCars();
    }

    t.getTotalAmmount();

    return 0;
}
