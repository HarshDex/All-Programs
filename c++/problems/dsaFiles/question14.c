// 13-> write a program to search a node from the linked list : 
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void printData(struct node *head)
{
    printf("linked list : ");
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }printf("\n");
}
struct node * insert(struct node *head,int a)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = a;
    if(head == NULL)
    {
        head = p;
        head->next = NULL;
    }        
    struct node *right = head;
    while(right->next != NULL)
        right = right->next;
    right->next = p;
    p->next = NULL;
    return head;
}
struct node *searchNode(struct node *head,int key)
{
    if(head == NULL && head->data == key)
        return head;
    while(head != NULL)
    {
        if(head->data == key)
        {
            printf("found successfully");
            return head;
        }
        head = head->next;
    }
    printf("Not found !!");
    return NULL;
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

    int k ;
    printf("enter the element you want to search : ");
    scanf("%d",&k);

    struct node *temp = searchNode(head,k);
    printf("\n%d",temp->data);

  return 0;
}