//templates are used for generic programming ie we can write the code for different datatypes  and once or we assign the data type at the end or compile time
// here i am giving an example
// template<class t>
// class vector
// {
//     t* arr; //here t can be int char or float 
//     public : 
//         vector(t* arr)
//         {
//             this->ar = ar;
//         }
// };
//this is highly used in competitive programming 
#include<bits/stdc++.h>
using namespace std;

template <class T>
class vec
{
    public : 
        T *arr;
        int size;
        vec(int m)
        {
            size = m;
            arr = new T[size];
        }
        T dotProduct(vec &v)
        {
            T d=0;
            for(int i =0;i<size;i++)
            {
                d += this->arr[i]*v.arr[i];
            }
            return d;
        }
};
int main()
{
    // vector 1
    vec <float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    // vector 2
    vec <float>v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;

    float sum = v1.dotProduct(v2);  
    cout<<"sum : "<<sum;
    return 0;
}
