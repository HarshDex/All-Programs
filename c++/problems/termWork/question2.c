// Q2.Write a C program to create two linked lists positive and negative from a Original linked list,
//  so that positive linked list contains all positive elements and negative linked list contains
//  negative elements. Positive and negative linked lists should use the node of existing original
//  linked list. 
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node* next;
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
void seprate(struct node *head)
{
    struct node *temp  =  head;
    struct node *n = head;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    while(temp != NULL)
    {
        if(temp ->data < 0)
        {
            if(temp->data != n->data)   
            {
                p->data = temp->data;
                temp->data = n->data;
                n->data = temp->data;            
            }
            n = n->next;
        }
        temp = temp->next;
    }
    int count = 0;
    struct node *h = head;
    while(h != NULL)
    {
        if(h->data<0)
            count++;
    }
    struct node *z = head;
    for(int i =0;i<count;i++)
    {
        z = z->next;
    }
    struct node *x = z->next;
    z->next = NULL;
    
    printf("printing the negative data : ");
    printData(head);
    
    printf("printing the positive data : ");
    printData(x);
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

    seprate(head);
    return 0;
}