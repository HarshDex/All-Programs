#include<iostream>
using namespace std;
template<class S1, class S2> S1 sum(S1 x , S2 y )
{
 return x+y;
}
int main()
{
 cout<<sum(4,4)<<endl;
 cout<<sum(6.6f,6.6f)<<endl;
}
