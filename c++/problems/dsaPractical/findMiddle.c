#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void printData(struct node *head){
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head = head->next;
    }printf("NULL");
}
struct node * insert(struct node *head,int data){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = NULL;
    if(head == NULL)
        return p;
    struct node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = p;
    return head;
}
int findMid(struct node *head){
    if(head == NULL)
        return -1;
    if(head->next == NULL)
        return head->data;
    struct node *slow = head;
    struct node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
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
        printf("enter the element : ");
        scanf("%d",&a);
        head = insert(head,a);
    }
    printf("printing the linked list before reverse : ");
    printData(head);
    printf("\nmiddle of the linked list : %d",findMid(head));
    
    return 0;
}