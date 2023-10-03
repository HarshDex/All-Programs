#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void printData(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}
struct node *create(struct node *head,int data)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = head;
    while(p->next!=NULL)
    {
        p= p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
int main()
{
    int n;
    printf("Enter the number of nodes present in the linked list : ");
    scanf("%d",&n);
    struct node* head = (struct node*)malloc(sizeof(struct node));
    int d;
    printf("Enter element : ");
    scanf("%d",&d);
    head->data = d;
    head->next = NULL;
    for(int i =0;i<n-1;i++)
    {
        int a;
        printf("Enter element : ");
        scanf("%d",&a);
        head = create(head,a);
    }
    printData(head);

    printf("\nNow linked list is converted into the linked list : ");

    struct node * s = head;
    while(s->next!=NULL)
    {
        s = s->next;
    }
    struct node *top = s;

    return 0;
}