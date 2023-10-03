#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next;
};

void printData (struct node *ptr)
{
    int i=1;
    while(ptr!=NULL)
    {
        printf("%d - element : %d\n",i,ptr->data);
        ptr=ptr->next;
        i++;
    }
}
struct node  *insertAtbegning(struct node *head , int data)
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct node *insertAtindex(struct node *head,int data, int index)
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p;
    p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next = p->next;
    p->next=ptr;
    ptr->data=data;

    return head ;
}

struct node *insertAtend(struct node*head,int data)
{
    struct node*ptr= (struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct node *insertAtnode(struct node*head,struct node *preNode,int data)
{
    struct node*ptr= (struct node*)malloc(sizeof(struct node));
    ptr->data=data ;
    ptr->next=preNode->next;
    preNode->next=ptr;
    
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
    sixth->next = NULL;

    //Printing the data
    int i=1;
    
    printf("\nlinked list : \n\n");
    printData(head);

    printf("\n\n");

    //insertion at the begining
    head = insertAtbegning(head,21);

    printf("insertion at begning :\n\n");
    printData(head);

    printf("\n\n");

    head=insertAtindex(head,31,3);

    printf("insertion at given index :\n\n");
    printData(head);

    head=insertAtend(head,50);

    printf("insertion at end : \n\n");
    printData(head);

    head=insertAtnode(head,second,5);

    printf("insertion at node : \n\n");
    printData(head);
    return 0;
}
