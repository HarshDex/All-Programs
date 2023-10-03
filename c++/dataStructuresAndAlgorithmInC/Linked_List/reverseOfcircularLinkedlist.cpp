#include <iostream>
using namespace std;
class node 
{
    public:
        int data;
        node *next ;
};
void printData(node *head)
{
    int i=1;
    node *p = head;
    do
    {
        cout<<i<<" - "<<"Element = "<<p->data<<endl;
        p = p->next;
        i++;
    } while (p!=head);
    
}

node *reverse(node *head)
{
    node *p = head;
    node *n = head;
    while(n->next!=head)
    {
        p=p->next;
        n->next;
    }
    node *c = head;
    while(n!=head)
    {
        n = n->next;
        c->next = p;
        p = c;
        c = n;
    }
    head = c;
    return head;    
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
    
    head->data = 12;
    second->data = 32;
    third->data = 45;
    fourth->data = 13;
    fifth->data = 134;
    sixth->data = 54;

    //assignign the pointer

    head->next= second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = head;

    //printing the linked list 

    cout<<"printintg the circular linked list before reversal"<<endl;
    printData(head);
    
    //reversing the linked list 

    cout<<"printing the circular linked list after reveral"<<endl;
    reverse(head);
    printData(head);

    return 0;
}
