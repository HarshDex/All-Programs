// 12.	Create a Single Linked List with pointers left & right where new nodes are always added after the right. Then user will input a key that should be searched in the linked list & the element having the key value should be deleted & linked list should be updated. If elements are not found, then a message "Unsuccessful Search" should be displayed.
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
    if(head == NULL || head->data == key)
        return NULL;
    struct node *prev = head;
    struct node *cur = head->next;

    int flag = 0;
    while(cur != NULL)
    {
        if(cur->data == key)
        {
            flag++;
            prev->next = cur->next;
            free(cur);  
            cur = prev->next;
            prev  = prev->next;
        }
        else
        {
            cur = cur->next;
            prev = prev->next;
        }
    }
    if(flag == 0)
        printf("\nUnsuccessful search !!\n");
    else
        printf("\ndeleted successfully\n");
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

    int k ;
    printf("enter the element you want to delete : ");
    scanf("%d",&k);

    head = searchNode(head,k);
    printData(head);

  return 0;
}