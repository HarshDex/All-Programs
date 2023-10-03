#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of rows : ";cin>>n;
    int m;
    cout<<"enter the number of columns : ";cin>>m;
    int ar[n][m];
    cout<<"enter the elements : ";
    for(int i =0;i<n;i++){
        cout<<endl;
        for(int j = 0;j<m;j++){
            cin>>ar[i][j];
        }
    }

    //printing the boundary

    for(int i =0 ;i<n;i++){
        cout<<endl;
        for(int j = 0;j<m;j++){
            if(i == 0 || j == 0 || i == n-1 || j == m-1){
                cout<<ar[i][j]<<" ";
            }
            else 
                cout<<"  ";
        }
    }

    return 0;
}
