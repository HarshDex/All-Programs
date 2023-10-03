//15.Doubly Linked List: Write a C program to implement doubly linked list with following operations 
// i) Insert 
// ii) delete   
// iii) display
// 13-> write a program to search a node from the linked list : 
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev; 
    struct node *next;
};
void printDataRev(struct node *tail)
{
    printf("linked list in reverse : ");
    while(tail != NULL)
    {
        printf("%d ",tail->data);
        tail = tail->prev;
    }printf("\n");
}
void printData(struct node *head)
{
    printf("linked list : ");
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }printf("\n");
    printDataRev(head);
}
struct node *deleteAtfirst(struct node *head)
{
    struct node *del = head ->next ;
    del->prev = NULL;
    free(head);
    return del;
}

struct node *deleteAtend(struct node *head)
{
    struct node *del = head;
    while(del->next != NULL)
    {
        del = del->next;
    }
    del->prev->next = NULL;
    free(del);
    return head;
}

struct node *deleteNodeAtindex(struct node *head,int index)
{
    struct node *del = head;
    struct node *del1 = head->next;
    for(int i=0;i<index-1;i++)
    {
        del = del->next;
        del1 = del1 ->next;
    }
    del->next = del1->next;
    del1->next->prev = del;
    free(del1);
    return head;
}

struct node *create(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->prev = NULL;
    p->next = NULL;
    return p;
}
struct node * insert(struct node *head,int a)
{
    struct node *p = create(a);
    if(head == NULL)
        return p;
    struct node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
    p->prev = temp;
    return head;
}

int main()
{

    struct node *head = NULL;
    int n ;
    printf("enter the number of element : ");
    scanf("%d",&n);

    for(int i =0;i<n;i++)
    {
        int a ;
        printf("enter the element : ");
        scanf("%d",&a);
        head = insert(head,a);
    }
    printData(head);
    return 0;
}