#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next;
};

void printData (struct node *head)
{
    struct node*ptr = head;
    int i=1;
    do
    {
        printf("%d - Element : %d\n",i,ptr->data);
        ptr = ptr->next ;
        i++;
    }while(ptr!=head);
}
struct node* insertAtfirst(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head->next;
    ptr->data= data;
    while(p->next!=head)
    {
        p=p->next;
    }

    //at this point p points to the last node of the cirular linked list 
    p->next=ptr;
    ptr->next= head;
    head=ptr;
    return head;
}

struct node* insertInbetween(struct node* head,int data,int index)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head->next;
    for(int i=1;i<index-1;i++)
    {
        p=p->next;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node *insertInend(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head->next;
    while(p->next!=head)
    {
        p=p->next;
    }
    //currently we are at end node
    ptr->data=data;
    ptr->next = head;
    p->next=ptr;
    return head;
}

struct node* insertIngivenNode(struct node* head,struct node* prenode,int data)
{
    struct node*ptr= (struct node*)malloc(sizeof(struct node));
    struct node *p=head->next;
    while(p->next!=prenode)
    {
        p=p->next;
    }
    //currently we are at the node at which we have to insert the element
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
int main()
{
    struct node *head,*second,*third,*fourth,*fifth,*sixth;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));
    sixth = (struct node*)malloc(sizeof(struct node));

    //Assigning the data to the list 

    head->data = 12;
    head->next = second;

    second->data = 34;
    second->next =third;

    third->data = 23;
    third->next = fourth;

    fourth->data = 49;
    fourth->next = fifth;

    fifth->data = 53;
    fifth->next = sixth;

    sixth->data = 89;
    sixth->next = head;

    //Printing the data
    
    printf("\ncircular linked list : \n\n");
    printData(head);

    //printing the lists after insertion

    printf("\ncircular linked list after insertion in the first node : \n\n");
    head = insertAtfirst(head,10);
    printData(head);

    //printing the list after insertion

    printf("\ncircular linked list after insertion in between the node : \n\n");
    head = insertInbetween(head,63,3);
    printData(head);

    //printing the list after insertion

    printf("\ncircular linked list after insertion in the end of the node : \n\n");
    head = insertInend(head,15);
    printData(head);

    //printing the list after insertion

    printf("\ncircular linked list after insertion in the end of the node : \n\n");
    head = insertIngivenNode(head,third,25);
    printData(head);

    return 0;


}
