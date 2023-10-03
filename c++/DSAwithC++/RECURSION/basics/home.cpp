#include <iostream>
using namespace std;
void path(int source,int destination)
{
    cout<<"source : "<<source<<" destination : "<<destination<<endl;
    if(source == destination)
    {
        cout<<"reached";
        return ;
    }
    source ++;
    return path(source,destination);
}
int main()
{
    int src = 0;
    int destination;
    cout<<"enter destination : ";cin>>destination;

    path(src,destination);

    return 0;
}
