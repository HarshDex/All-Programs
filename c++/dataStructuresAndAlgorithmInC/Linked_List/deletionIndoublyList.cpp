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

node *deleteAtfirst(node *head)
{
    node *del = head ->next ;
    del->pre = NULL;
    free(head);
    return del;
}

node *deleteAtend(node *head)
{
    node *del = head;
    while(del->next != NULL)
    {
        del = del->next;
    }
    del->pre->next = NULL;
    free(del);
    return head;
}

node *deleteNodeAtindex(node *head,int index)
{
    node *del = head;
    node *del1 = head->next;
    for(int i=0;i<index-1;i++)
    {
        del = del->next;
        del1 = del1 ->next;
    }
    del->next = del1->next;
    del1->next->pre = del;
    free(del1);
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
    cout<<"printing the doubly linked list before deletion: \n"<<endl;
    printData(head);
    cout<<"\n";

    //printing the doubly linked list after deletion
    cout<<"printing the doubly linked list  after deleting the first node : \n "<<endl;
    head = deleteAtfirst(head);
    printData(head);
    cout<<"\n";

    //printing the doubly linked list after deletion
    cout<<"printing the doubly linked list  after deleting the end node : \n "<<endl;
    head = deleteAtend(head);
    printData(head);
    cout<<"\n";

    //printing the doubly linked list after deletion
    cout<<"printing the doubly linked list  after deleting the end node : \n "<<endl;
    head = deleteNodeAtindex(head,2);
    printData(head);
    cout<<"\n";
    
    return 0;
}
