#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data ;
    struct Node *next ;
};
int count(struct node *head){
    int c= 0;
    struct Node *q = head;
    do{
        c++;
        q=q->next;
    }while(q!=head);
    return c;
}
int main()
{
    //creating a linked list 
    struct Node *head ;
    struct Node *second ;
    struct Node *third;

    //allocate memory for the nodes in the heap
    //this step is very important 
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));

    //linking of first and second
    head->data=3;
    head->next=second;

    //linking of second and third 
    second->data=4;
    second->next=third;

    //linking of last and head
    third->data=5;
    third->next= head;
    struct Node * p = head;
    do
    {
        printf("Element : %d\n ",p->data);
        p = p->next ;
    }while(p!=head);
    printf("%d",count(head));
}
