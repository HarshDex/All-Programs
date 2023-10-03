#include <bits/stdc++.h>
using namespace std;
int solve(int *ar,int n,int key){
    deque<int> maxi(key);
    deque<int> mini(key);

    int ans = 0;

    //pushing code 
    for(int i =0 ;i<key;i++){
        while(!maxi.empty() && ar[maxi.back()] <= ar[i] ){
            maxi.pop_back();
        }
        while(!mini.empty() && ar[mini.back()] >= ar[i]){
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
    }

    //for next windown 

    ans += ar[maxi.front()] + ar[mini.front()];
    for(int i = key;i<n;i++){

        while(!maxi.empty() && i-maxi.front() >= key){
            maxi.pop_front();
        }

        while(!mini.empty() && i-mini.front() >= key){
            mini.pop_front();
        }

       while(!maxi.empty() && ar[maxi.back()] <= ar[i] ){
            maxi.pop_back();
        }
        while(!mini.empty() && ar[mini.back()] >= ar[i]){
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

        ans += ar[maxi.front()] + ar[mini.front()];
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;

    int ar[n];

    for(int i =0 ;i<n;i++){
        cout<<"enter element : ";cin>>ar[i];
    }
    
    int k;
    cout<<"enter the windown size : ";cin>>k;

    int ans = solve(ar,n,k);
    cout<<"sum of the maximum and minimum element of each window of size "<<k<<" is : "<<ans<<endl;
    return 0;
}
