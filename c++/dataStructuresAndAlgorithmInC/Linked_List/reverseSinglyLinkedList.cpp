#include <iostream>
using namespace std;
class node
{
    public:
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
node *reverse(node *head)
{
    node *prenode= NULL;
    node *currentnode = head;
    node *newnode = head;
    while(newnode!=NULL)
    {
        newnode = newnode->next;
        currentnode ->next  = prenode;
        prenode = currentnode;
        currentnode = newnode;
    }
    head = prenode;
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
    head->data= 1;
    second->data=2; 
    third->data=3;
    fourth->data=4;
    fifth->data=5;
    sixth->data=6;

    //setting the next pointer adress
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth ->next = fifth;
    fifth-> next = sixth;
    sixth ->next = NULL;

    //printing the singly linked list 
    cout<<"printing the singly linked list before reversal : "<<endl;
    printData(head);
    cout<<"\n";

    //printing the singly linked list in reverse order 
    cout<<"printing the singly linked list in reverse order : "<<endl;
    head = reverse(head);
    printData(head);
    cout<<"\n";
    return 0;
}
