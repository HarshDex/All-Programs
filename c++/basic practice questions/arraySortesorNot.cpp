#include <iostream>

using namespace std;

int main()
{
    int k=0;
    int ar[]={1,2,3,4,5,9,7,8};

    int c= sizeof(ar)/sizeof(int);

    for(int i=0;i<c;i++)
    {
        if(ar[i]>ar[i+1])
            break;
        k++;
    }
    if(c==k)
        cout<<"array is sorted";
    else    
        cout<<"not sorted";

    return 0;
}
                   