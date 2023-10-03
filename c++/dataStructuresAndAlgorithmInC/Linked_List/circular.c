#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void printData(struct node *head){
    struct node *q = head;
    do{
        printf("%d ",q->data);
        q = q->next;
    }while(q!= head);
}
struct node *insert(struct node *head,int data){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = p;
    if(head == NULL)
        return p;
    struct node *q = head;
    while(q->next != head){
        q = q->next;
    }
    q->next = p;
    p->next = head;
    return head;
}
int main()
{
    int n;
    printf("enter the number of node : ");
    scanf("%d",&n);

    struct node *head = NULL;
    for(int i = 0;i<n;i++){
        int a;
        printf("enter the element : ");
        scanf("%d",&a);
        head = insert(head,a);
    }

    printData(head);
    return 0;
}