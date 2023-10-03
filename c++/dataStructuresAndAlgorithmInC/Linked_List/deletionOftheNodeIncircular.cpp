#include <iostream>
using namespace std;
class node
{
    public:
        int data ;
        node *next ;
};
void printData(node *head)
{
    node *p= head;
    int i=1;
    do
    {
        cout<<i<<" - "<<p->data<<endl;
        p=p->next;
        i++;
    }while(p!=head);
}
node *deleteAtfirst(node *head)
{
    node *q = head;
    node *p;
    while(q->next!=head) 
    {
        q = q->next;
    }
    p=head;
    head=head->next;
    q->next = head;
    free(p);
    return head;

}
node *deleteAtend(node *head,node *tail)
{
    node *q= head;
    while( q->next!=tail)
    {
        q=q->next;
    }
    q->next=head;
    free(tail);
    return head;
}
node *deleteAtgivenIndex(node *head,int index)
{
    node *temp = head;
    node *q = head ->next;
    for(int i=1;i<index-1;i++)
    {
        temp= temp->next;
        q = q->next;
    }
    temp->next= q->next;
    free(temp);
    return head;

}

node *deleteAtgivenValue(node *head,int value)
{
    node *temp = head;
    node *q = head->next;
    while(temp->data != value)
    {
        temp= temp->next;
        q = q->next;
    }
    temp->next= q->next;
    free(q);
    return head;

}
int main()
{
    node *head ,*second,*third,*fourth ,*fifth,*sixth;
    head=new node();
    second = new node();
    third = new node();
    fourth = new node();
    fifth = new node();
    sixth = new node();

    head ->data = 1;
    second ->data =2;
    third  ->data =3;
    fourth ->data =4;
    fifth ->data =5;
    sixth ->data = 6;

    head->next= second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=head;

    cout<<"printing the linked list before the deletion of the node : \n\n";
    printData(head);
    cout<<"\n";

    //deletion of the first node from the linked list 
    cout<<"printing the linked list after the deletion of the first node : \n\n";
    head= deleteAtfirst(head);
    printData(head);
    cout<<"\n";

    //deletion of the end node from the given linked list 
    cout<<"printing the linked list after the deletion of the end node : \n\n";
    head= deleteAtend(head,sixth);
    printData(head);
    cout<<"\n";

    //deletion of the node at the given index in the linked list 
    cout<<"printing the linked list after the deletion of the node in that particular index : \n\n";
    head= deleteAtgivenIndex(head,2);
    printData(head);
    cout<<"\n";

    
    //deletion of the node where the particular value exist 
    cout<<"printing the linked list after the deletion of the node where the particular value exist : \n\n";
    head= deleteAtgivenValue(head,4);
    printData(head);
    cout<<"\n";
    


    return 0;
}
