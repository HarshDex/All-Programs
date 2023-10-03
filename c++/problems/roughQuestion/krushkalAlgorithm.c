#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
void printData(struct node *head)
{
    while(head != NULL)
    {
        printf("%d->",head->data);
        head = head->next;
    }printf("NULL");
    printf("\n");
}
void split(struct node *head)
{
    if(head == NULL)
        return;
    struct node *p = head;
    struct node *q = head->next;
    while(p!=NULL)
    {
        if(p->data < 1)
        {
            p->next = head;
            head = p;
            p = q;
            q = p->next;
        }
        if(p->data > 1)
        {
            p = p->next;
            q = q->next;
        }
    }
    struct node *t = head->next;
    struct node *pre = head;
    while(t!=NULL)
    {
        if(p->data > 1)
        {
            p->next = NULL;
            break;
        }
        else
        {
            p = p->next;
            t = t->next;
        }
    }
    printData(p);
    printData(t);
}
struct node* insert(struct node *head,int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = NULL;
    if(head == NULL)
        return p;
    struct node *temp = head;
    while(temp->next!= NULL)
        temp = temp->next;
    temp->next = p;
    return head;
}
int main()
{
    int n;
    printf("enter the number of nodes present in the linked list : ");
    scanf("%d",&n);

    struct node *head = NULL;
    for(int i =0;i<n;i++)
    {
        int a;
        printf("enter element : ");
        scanf("%d",&a);
        head= insert(head,a);
    }

    printData(head);
    split(head);
    return 0;
}