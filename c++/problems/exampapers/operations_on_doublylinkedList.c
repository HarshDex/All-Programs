#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* pre;
};

void printData(struct node * head)
{
    while(head!=NULL)
    {
      printf("element : %d\n",head->data);
      head = head->next;
    }
}
struct node * insertAtfirst(struct node* head,int data)
{
    struct node *p = (struct node*)malloc(sizeof(struct node));
    struct node *q = head;
    p->data = data;
    p->pre = NULL;
    q->pre = p;
    p->next = q;
    head = p;
    return head;
}

struct node *deleteAtfirst(struct node *head)
{
    struct node *del = head ->next ;
    del->pre = NULL;
    free(head);
    return del;
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

    printf("Printing the linked list :\n");
    printData(head);
    printf("\n");
    printf("deleting the first node from the linked list :\n");
    head = deleteAtfirst(head);
    printData(head);
    printf("\n");
    printf("inserting the node in the linked list : \n");
    int a ;
    printf("enter the data which you want to insert in the linked list : ");
    scanf("%d",&a);
    head = insertAtfirst(head ,a);
    printData(head);
    return 0;
}