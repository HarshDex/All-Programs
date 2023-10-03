#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data ;
    struct Node *next ;
};
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

    //linking of third and null
    third->data=5;
    third->next= '\0';

    while(head!='\0')
    {
        printf("element : %d\n",head->data);
        head =head->next;
    }

}