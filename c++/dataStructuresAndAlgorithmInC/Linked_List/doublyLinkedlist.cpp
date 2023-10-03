#include <iostream>
using namespace std;
class node
{
    public:
    node *pre;
    int data;
    node *next;
};
void printData(node *head)
{
    int i=1;
    while(head!=NULL)
    {
        cout<<i<<" - "<<"Element"<<" = "<<head->data<<endl;
        head= head->next;
        i++;
    }
}
void printDatainReverse(node *tail)
{
    int i=1;
    while(tail!=NULL)
    {
        cout<<i<<" - "<<"Element"<<" = "<<tail->data<<endl;
        tail= tail->pre;
        i++;
    }
}
int main()
{
    node *head,*second,*third,*fourth,*fifth,*sixth;
    head = new node();
    second = new node();
    third = new node();
    fourth = new node();
    fifth = new node();
    sixth = new node();

    //assigning the data 
    head->data= 1;
    second->data=2; 
    third->data=3;
    fourth->data=4;
    fifth->data=5;
    sixth->data=6;

    //setting the pre pointer adress 
    head->pre = NULL;
    second->pre = head;
    third->pre = second ;
    fourth->pre = third;
    fifth->pre = fourth;
    sixth->pre = fifth;

    //setting the next pointer adress
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth ->next = fifth;
    fifth-> next = sixth;
    sixth ->next = NULL;

    //printing the doubly linked list 
    cout<<"printing the doubly linked list : "<<endl;
    printData(head);
    cout<<"\n\n";

    //printing the doubly linked list 
    cout<<"printing the doubly linked list : "<<endl;
    printDatainReverse(sixth);
    cout<<"\n\n";


    return 0;
}
