#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next;
};

void printData(struct node *head){
int i=1;
    while(head!=NULL)
    {
        printf("%d - element : %d\n",i,head->data);
        head=head->next;
        i++;
    }
}

int main()
{
    struct node *head,*second,*third,*fourth,*fifth,*sixth;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));
    sixth = (struct node*)malloc(sizeof(struct node));

    //Assigning the data to the list 

    head->data = 12;
    head->next = second;

    second->data = 34;
    second->next =third;

    third->data = 23;
    third->next = fourth;

    fourth->data = 49;
    fourth->next = fifth;

    fifth->data = 53;
    fifth->next = sixth;

    sixth->data = 89;
    sixth->next = NULL;

    //Printing the data
    printData(head);
    return 0;
}
