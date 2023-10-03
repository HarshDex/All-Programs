#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next;
};

void printData(struct node *head){
int i=1;
    while(head!=NULL)
    {
        printf("%d - element : %d\n",i,head->data);
        head=head->next;
        i++;
    }
}

struct node *deletingFirstNode(struct node* head)
{
    struct node *q = head;
    head = head->next;
    free(q);
    return head;
}

struct node* deletingEndNode(struct node* head)
{
    struct node* ptr = head;
    struct node*q= head->next;
    while(q->next!=NULL)
    {
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=NULL;
    free(q);
    return head;
}

struct node* deleteAtIndex(struct node* head ,int index)
{
    struct node *p = head;
    struct node* q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q= q->next;
    }

    p->next=q->next;
    free(q);
    return head ;
}

struct node *deleteAtvalue(struct node * head,int data)
{
    struct node * p=head;
    struct node*  q=head->next;
    while( q->data!=data && q->next!= NULL)
    {
        p=p->next;
        q=q->next;
    }
    free(q);
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
    printf("AT FIRST THE LINKED LIST : \n");
    printData(head);

    //deleting the first node 

    printf("list after deleting the fist node :\n");
    head = deletingFirstNode(head);
    printData(head);

    //deleting the end node 

    printf("list after deleting the last node :\n");
    head = deletingEndNode(head);
    printData(head);


    //deleting the node in between or in the given index

    printf("list after deleting the node at the given index :\n ");
    head = deleteAtIndex(head,3);
    printData(head);

    //deleting the node with a given value 

    printf("list after deleting the node for a given value :\n ");
    head = deleteAtvalue(head,34);
    printData(head);


    return 0;
}
