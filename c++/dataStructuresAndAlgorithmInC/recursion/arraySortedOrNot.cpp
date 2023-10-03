#include <iostream>

using namespace std;
bool sorted(int ar[] ,int index)
{
    if(index==sizeof(ar)/sizeof(int)-1)
        return true;
    else
        return ar[index]<ar[index+1] && sorted(ar,index+1);
}
int main()
{
    int ar[]={1,2,3,9,6,7,8};
    bool a=sorted(ar,0);
    if(a==true)
        cout<<"sorted array";
    else
        cout<<"not sorted";


    return 0;
}
