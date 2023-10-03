#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of enteries : ";cin>>n;

    string name;
    int age;

    //creating the map
    map<string,int> m;

    //storing the values 
    for(int i =0 ;i<n;i++){
        cout<<"enter the name : ";
        cin>>name;

        cout<<"enter the age : ";
        cin>>age;

        m[name] = age;
    }

    // traversing using for each loop
    cout<<"name"<<"  "<<"age : "<<endl; 
    for(auto &it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }

    //travering using iterator
    map<string,int> :: iterator it = m.begin();
    for(it = m.begin() ; it != m.end() ; it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    //searching in map;
    cout<<"enter the name whose age you want to find : ";cin>>name;
    cout<<"age : "<<m.at(name);

    
    return 0;
}
