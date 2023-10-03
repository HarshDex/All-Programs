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

node *insertAtfirst(node *head,int data)
{
    node *q = new node();
    q->data = data;
    head->pre= q;
    q->next = head;
    q->pre = NULL;
    return q;
}

node *insertAtend(node *head , int data)
{
    node *temp = head;
    node *q = new node ();
    while(temp->next!=NULL)
    {
        temp= temp->next ;
    }
    q->data=data;
    temp->next = q ;
    q->pre =temp;
    q->next = NULL;
    return head;
}

node *insertIngivenIndex(node*head,int index,int data)
{
    node *q = new node ();
    node *x=head;
    node *y=head->next;
    for(int i=0;i<index-1;i++)
    {
        x=x->next ;
        y = y->next ;
    }
    q->data = data;
    x->next = q;
    y->pre = q;
    q->pre = x;
    q->next = y;
    return head;
}

node *insertAtgivenNode(node *head,node *gnode,int data)
{
    node * q = new node ();
    q->data = data;
    q->next= gnode->next;
    q->pre = gnode->pre;
    gnode->next = q;
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

    //inserting a node in the begining of the linked list 
    cout<<"printing the list after inserting the node in begining  of the linked list : \n";
    head = insertAtfirst(head,0);
    printData(head);
    cout<<"\n\n";

    //inserting a node in the end of the doubly linked list  
    cout<<"printing the list after inserting the node in end of the linked list : \n";
    head = insertAtend(head,7);
    printData(head);
    cout<<"\n\n";

    //inserting a node in between the doubly linked list  
    cout<<"printing the list after inserting the node in between the linked list : \n";
    head = insertIngivenIndex(head,3,10);
    printData(head);
    cout<<"\n\n";

    //inserting a node in  the given index of the doubly linked list  
    cout<<"printing the list after inserting the node in the given node at the linked list : \n";
    head = insertAtgivenNode(head,fourth,15);
    printData(head);
    cout<<"\n\n";

    return 0;
}
