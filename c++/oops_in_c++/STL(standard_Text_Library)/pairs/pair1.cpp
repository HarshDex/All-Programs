// Pair is used to combine together two values that may be of different data types. Pair provides a way to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples. The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 

// The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
// Pair can be assigned, copied, and compared. The array of objects allocated in a map or hash_map is of type ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.
// To access the elements, we use variable name followed by dot operator followed by the keyword first or second.
#include <iostream>
using namespace std;
int main()
{
    pair<int,string> p; 
    p = make_pair(3,"harsh");
    pair<int,string> &p1 = p; // we can copy one pair to another but it will only copy its copy actual values will not be change but if we put a '&' sign that the values will be change
    p1.first = 2;
    p1.second = "hello";
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;

    //making a pair of  integer array : 
    int a[3];
    int b[3];
    pair<int,int> ar[3];
    ar[0] = {1,2};
    ar[1] = {3,1};
    ar[2] = {2,3};

    int dotpro =0;
    for(int i =0;i<3;i++)
    {
        dotpro = dotpro + ar[i].first*ar[i].second;
    }   

    cout<<"dot product of the two number is : "<<dotpro<<endl;

    //swaping two pairs 
    swap(ar[0],ar[2]);
    for(int i =0;i<3;i++)
    {
        cout<<ar[i].first<<" "<<ar[i].second<<endl;;
    }
    

    return 0;
}
