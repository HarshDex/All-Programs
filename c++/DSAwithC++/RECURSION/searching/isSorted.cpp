//check whether the given array is sorted or not 
#include <iostream>
using namespace std;

//via recursion 
bool isSorted(int ar[],int n)
{
    if(n==0||n==1)
        return true;
    if(ar[0]>ar[1])
        return false;
    else{
        return isSorted(ar+1,n-1);
    }
}

// via iteration
// bool isSorted(int ar[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(ar[i]>ar[i+1])
//             return false;
//     }
//     return true;
// }

int main()
{
    int n;
    cout<<"enter the number of elements in the array : ";cin>>n;
    int ar[n];
    
    //taking elements from the user 
    for(int i =0; i<n;i++)
        cin>>ar[i];

    if(isSorted(ar,n)==true)
        cout<<"array is sorted"<<endl;
    else
        cout<<"array is not sorted"<<endl;

    return 0;
}
