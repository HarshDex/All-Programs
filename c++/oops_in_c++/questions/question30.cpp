#include <iostream>
#include <vector>
using namespace std;
void printList(vector <int> &Vr)
{
 for(int i=0;i<Vr.size();i++)
 {
 cout<<Vr[i]<<" ";
 }
 cout<<endl;
}
int main()
{
 vector <int> Vr ;
 for(int i=0;i<5;i++)
 {
 Vr.push_back(i+1);
 }
 printList(Vr);
 cout<<"Adding a new element 8 in last : "<<endl;
 Vr.push_back(7);
 cout<<"Showing the capacity of vector : "<<Vr.capacity()<<endl;
 cout<<"Removing the element from the last :"<<endl;
 Vr.pop_back();
 cout<<"The size of a vector is : "<<Vr.size()<<endl;
 cout<<"Adding an element at start"<<endl;
 Vr.insert(Vr.begin(),0);
 printList(Vr);
 cout<<"Adding an element at 3rd position "<<endl;
 Vr.insert(Vr.begin()+4,8);
 printList(Vr);
 Vr.clear();
 cout<<"After clearing all the elements "<<endl;
 cout<<"The capacity of a vector is : ";
 cout<<Vr.capacity()<<endl;
 cout<<"The size of a vector is : ";
 cout<<Vr.size()<<endl;
 }