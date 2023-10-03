#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next ;
};

void printData(struct node *p)
{
    int i=1;
    while(p!=NULL)
    {
        printf("%d - Element = %d\n",i,p->data);
        p=p->next;
        i++;
    }
}

struct node *insertAtbegining(struct node*p ,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=p;
    return ptr;
}

struct node *insertAtindex(struct node*p,int data,int index)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *x=p;
    int i=0;
    while(i!=index-1)
    {
        x= x->next ;
        i++;
    }
    ptr->next=x->next;
    x->next=ptr ;
    ptr->data=data;

    return p;
}

struct node *insertAtend(struct node* head ,int data )
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p= head ;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head ;
}

struct node* insertAtnode(struct node* head , struct node*second,int data )
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=second->next;
    second->next=ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head= (struct node *)malloc(sizeof(struct node));
    second= (struct node *)malloc(sizeof(struct node));
    third= (struct node *)malloc(sizeof(struct node));

    //linking of the lists 

    head->data=1;
    head->next=second;

    second->data=2;
    second->next = third ;

    third->data= 3;
    third->next = NULL;

    printData(head);


    //insertion at the begning 

    head = insertAtbegining(head,0);

    printf("after insertion :\n\n");

    printData(head);

    //insert the element in the given index 

    head=insertAtindex(head,33,2);

    printf("after insertion :\n\n");

    printData(head);

    //insert the element in the given end 

    for(int i =0;i<5;i++)
    {
        int a;
        printf("element :");
        scanf("%d",&a);
        head=insertAtend(head,a);
    }
    // head=insertAtend(head,7);
    // head=insertAtend(head,8);
    // head=insertAtend(head,9);

    printf("after insertion :\n\n");

    printData(head);

    //insert the element in the given node

    head=insertAtnode(head,second,7);

    printf("after insertion :\n\n");

    printData(head);

    // printf(
    printf("%d", head[3]);







}