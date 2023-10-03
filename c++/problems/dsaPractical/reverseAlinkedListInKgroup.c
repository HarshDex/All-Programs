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
struct node *revInk(struct node *head,int k){
    if(head == NULL)
        return NULL;
    struct node *prev = NULL;
    struct node *cur = head;
    struct node *forward = NULL;
    int count = 0;
    while(cur!=NULL && count < k){
        forward = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forward;
        count++; 
    }
    if(forward!=NULL){
        head->next = revInk(forward,k);
    }
    return prev;
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
    int k;
    printf("\nenter the group in which you want to reverse the linked list : ");
    scanf("%d",&k);
    head = revInk(head,k);
    printData(head);
    return 0;
}