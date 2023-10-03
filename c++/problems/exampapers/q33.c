#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next ;
};
void printData(struct node* head)
{
    struct node * p = head;
    do
    {
        p =  p->next ;
    }
    while(p!=head);
    
    do
    {
        printf("Element : %d\n",p->data);
        p = p->next ;
    }while(p!=p);
}

struct node *deleteAtfirst(struct node *head)
{
    struct node *q = head;
    struct node *p;
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
struct node *deleteAtend(struct node *head,struct node *tail)
{
    struct node *q= head;
    while( q->next!=tail)
    {
        q=q->next;
    }
    q->next=head;
    free(tail);
    return head;
}
struct node *deleteAtgivenIndex(struct node *head,int index)
{
    struct node *temp = head;
    struct node *q = head ->next;
    for(int i=1;i<index-1;i++)
    {
        temp= temp->next;
        q = q->next;
    }
    temp->next= q->next;
    free(temp);
    return head;

}

struct node *deleteAtgivenValue(struct node *head,int value)
{
    struct node *temp = head;
    struct node *q = head->next;
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
    //creating a linked list 
    struct node *head ;
    struct node *second ;
    struct node *third;
    struct node *fourth;
    struct node * fifth;

    //allocate memory for the nodes in the heap
    //this step is very important 
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    fifth=(struct node *)malloc(sizeof(struct node));

    //linking of first and second
    head->data=3;
    head->next=second;

    //linking of second and third 
    second->data=4;
    second->next=third;

    //linking of last and head
    third->data=5;
    third->next= fourth;

    fourth->data = 6;
    fourth->next = fifth;

    fifth->data = 7;
    fifth->next = head;
    
    printf("Printing the linked list :\n");
    printData(head);
}