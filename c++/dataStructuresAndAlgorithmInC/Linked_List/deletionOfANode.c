#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data ;
    struct node *next ;
};
void printData(struct node* head)
{
    int i=1;
    while(head!=NULL)
    {
        printf("%d - Element = %d \n", i , head->data);
        head=head->next;
        i++;
    }
}

struct node *deleteAtfirst(struct node *head )
{
    struct node *p= head ;
    head=head->next;
    free(p);
    return head;
}

struct node *deleteAtend(struct node *head )
{
    struct node *p= head ;
    struct node *q= head->next;

    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

struct node *deleteAtindex(struct node *head , int index)
{
    struct node *p= head ;
    struct node *q= head->next;

    for(int i=1;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next =q->next;
    free(q);
    return head;
}

struct node *deleteAtvalue(struct node *head , int value )
{
    struct node *p= head ;
    struct node *q= head->next;

    while(q->data!=value  && q->next !=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
int main()
{
    struct node *head,*second,*third,*fourth,*fifth,*sixth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    sixth=(struct node*)malloc(sizeof(struct node));

    head->data=12;
    head->next=second;

    second->data=13;
    second->next=third;

    third->data=14;
    third->next=fourth;

    fourth->data=15;
    fourth->next=fifth;

    fifth->data=16;
    fifth->next=sixth;

    sixth->data=17;
    sixth->next=NULL;

    printf("linked list before deletion : \n\n");
    printData(head);
    printf("\n");

    //deletion of the node at the start 
    printf("linked list after deletion of first node : \n\n");
    head = deleteAtfirst(head);
    printData(head);
    printf("\n");

    //deletion of the node in the last 
    printf("linked list after deletion of the end node : \n\n");
    head = deleteAtend(head);
    printData(head);
    printf("\n");

    //deletion of the node in the given index 
    printf("linked list after deletion of the node at the given node : \n\n");
    head = deleteAtindex(head,3);
    printData(head);
    printf("\n");

    //deletion of the node in with the given key 
    printf("linked list after deletion of the node at the given value : \n\n");
    head = deleteAtvalue(head,14);
    printData(head);
    printf("\n");
}