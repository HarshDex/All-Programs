// INTRODUCTION TO STL  
// STL advantages : 
// . resizing
// . sort
// . search 
// . reuse : well tested components
// . time saving thing  

// ~ Components of STL: 
// 1. CONTAINERS :- ['stores data','these are already implemented class','we use template classes','can be of any data types']
// 2. ALGORITHMS :-['set of prodecures','sorting','searching']
// 3. ITERATORS :-['object points to an element in a container','handeled just like pointers','corrects algorithms with containers']

// ~ TYPES OF CONTAINERS : 
// 1 - SEQUENCE CONTAINERES 
// 2 - ASSOCIATIVE CONTAINERES 
// 3 - DERIVED CONTAINERS


// size() – Returns the number of elements in the vector.
// max_size() – Returns the maximum number of elements that the vector can hold.
// capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
// resize(n) – Resizes the container so that it contains ‘n’ elements.
// empty() – Returns whether the container is empty.
// shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
// reserve() – Requests that the vector capacity be at least enough to contain n elements.

// C++ program
#include <iostream>
#include<vector>
using namespace std;
void printData(vector<int> v)
{
    for(auto i = v.begin();i != v.end();i++)
    {
        cout<<*i<<" ";
    }   
}
int main()
{   
    int n;
    cout<<"enter the number of element : ";cin>>n;

    vector <int> v;
    if(v.empty())
        cout<<"vector is empty"<<endl;;
    for(int i =0;i<n;i++)
    {
        int a;
        cout<<"enter the "<<i+1<<" value : ";
        cin>>a;

        v.push_back(a);
    }

    //printing the data :
    cout<<"printing the data : "<<endl;
    cout<<"vector : ";
    printData(v);

    cout<<"capacity = "<<v.capacity()<<endl;
    cout<<"size = "<<v.size()<<endl;
    cout<<"max_size = "<<v.max_size()<<endl;
    if(!v.empty())
        cout<<"vector is not empty"<<endl;

    int n1;
    cout<<"enter the size you want to resize the vector : ";cin>>n1;

    v.resize(n1);
    cout<<v.size()<<endl;

    v.shrink_to_fit();
    cout<<"vectors : ";
    printData(v);

    return 0;
}
