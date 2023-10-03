#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node * next;
};
void printData(struct node * head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
struct node *insert(struct node *head,int data)
{
    struct node *p = (struct node*)malloc(sizeof(struct node));
    struct node * q = head;
    while( q->next!=NULL)
    {
        q = q->next;
    }
    p->data = data;
    q->next = p;
    p->next= NULL;
    return head;
}
void create(int n)
{
    struct node * head = (struct node*)malloc(sizeof(struct node));
    for(int i =0;i<n;i++)
    {
        int a ;
        printf("enter the value: ");
        scanf("%d",&a);
        head = insert(head , a);
    }
    printf("linked list : ");
    printData(head);
}
int main()
{
    int n;
    printf("enter the number of nodes presnt in the linked list : ");
    scanf("%d",&n);

    create(n);


  return 0;
}