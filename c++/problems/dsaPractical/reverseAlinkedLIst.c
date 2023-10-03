#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void printData(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head = head->next;
    }
    printf("NULL");
}
struct node *rev(struct node *head){
    if(head == NULL || head->next == NULL)
        return head;
    struct node *temp = rev(head->next);
    head->next->next = head;
    head->next = NULL;
    return temp;
}

struct node *insert(struct node *head,int data){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->next = NULL;
    p->data = data;
    if(head == NULL)
        return p;
    struct node *temp = head;
    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = p;
    return head;
}
int main()
{
    int n;
    printf("enter the number of nodes : ");
    scanf("%d",&n);

    struct node *head = NULL;
    printf("enter the elements in the bst : \n");
    for(int i =0;i<n;i++){
        int a;
        printf("enter the element : ");
        scanf("%d",&a);
        head = insert(head,a);
    }
    printf("printing the linked list : ");
    printData(head);

    printf("\nreversing the linked list : ");
    head = rev(head);
    printData(head);
    return 0;
}