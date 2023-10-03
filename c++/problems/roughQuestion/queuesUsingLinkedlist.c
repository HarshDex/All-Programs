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

struct node *enqueue(struct node* front,int data)
{
    struct node *p = (struct node*)malloc(sizeof(struct node));
    struct node *q = front;
    while(q->next!=NULL)
    {
        q = q->next;
    }
    q->next = p;
    p->data = data;
    p->next = NULL;
    return front;
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

    printf("\n");
    printf("now linked list is converted into queues: ");

    struct node * rear = sixth;
    struct node * front= head;

    int a;
    printf("press [1] if you want to enqueue or push [2] if you want to dequeue");
    scanf("%d",&a);
    if(a ==  1)
    {
        int n;
        printf("enter how many element you want to enqueue : ");
        scanf("%d",&n);

        for(int i = 0;i<n;i++)
        {
            int d;
            printf("enter element: ");
            scanf("%d",&d);
            rear = enqueue(front,d);
        }
    }
    printData(front);
    return 0;
}
