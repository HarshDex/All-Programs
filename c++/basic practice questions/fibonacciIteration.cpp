// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the number of elements : ";
//     cin>>n;

//     int a = 0;
//     int b = 0;
//     int c = 1;
//     cout<<a<<" ";
//     for(int i = 0;i<n;i++){
//         cout<<c<<" ";
//         a = b;
//         b = c;
//         c = a+b;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n == 0 || n == 1)
        return n;
    return fib(n-1)+fib(n-2);
    
}
int main()
{
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    vector<int> adj;
    while(n--)
        adj.push_back(fib(n));
    reverse(adj.begin(),adj.end());
    for(auto it : adj)cout<<it<<" ";

    return 0;
}
