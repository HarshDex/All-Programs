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
    int i = 1;
    while(head!=NULL)
    {
        cout<<i<<" - "<<"Element"<<" = "<<head->data<<endl;
        head = head->next;
        i++;
    }
}

node *reverse(node *head)
{
    node *pnode = NULL;
    node *cnode = head;
    node *nnode = head;
    while(nnode!=NULL)
    {
        nnode = nnode->next;
        cnode->next =pnode; 
        pnode = cnode;
        cnode = nnode;
    }
    head = pnode;
    return head;
}

int main()
{
    node *head,*second,*third,*fourth,*fifth,*sixth;
    head = new node ();
    second = new node ();
    third = new node ();
    fourth = new node ();
    fifth = new node();
    sixth = new node();

    //assigning the values 
    head ->data = 1;
    second ->data = 2;
    third ->data = 3;
    fourth ->data = 4;
    fifth ->data = 5;
    sixth ->data = 6;

    head ->next = second ;
    second ->next =third;
    third ->next = fourth;
    fourth ->next = fifth;
    fifth ->next = sixth;
    sixth ->next = NULL;

    cout<<"printng the linked list before reversal : \n"<<endl;
    printData(head);
    cout<<"\n\n";

    cout<<"printng the linked list after reversal : \n"<<endl;
    head = reverse(head);
    printData(head);
    cout<<"\n";
    


    return 0;
}
