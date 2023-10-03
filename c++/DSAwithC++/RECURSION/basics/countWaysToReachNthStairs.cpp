#include <iostream>
using namespace std;
int countWays(int n)
{
    if(n < 0)
        return 0;
    if(n == 0)
        return 1;
    int ans = countWays(n-1)+countWays(n-2);
    return ans;
}
int main()
{
    int n;
    cout<<"enter the number of stairs : ";cin>>n;

    cout<<countWays(n)<<endl;
    return 0;
}