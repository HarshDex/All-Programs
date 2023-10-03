#include <iostream>

using namespace std;
class item
{
    private:
        int price;
        char name[40];
    public:
       void input()
        {
            cin>>price;
            cin>>name;
        }
       void output()
        {
            cout<<price<<"\t"<<name;
        }
};
int main()
{
    item input();
    item output();
    return 0;
}
