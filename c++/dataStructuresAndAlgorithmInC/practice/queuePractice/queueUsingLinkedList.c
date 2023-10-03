#include<stdio.h>
#include<malloc.h>
struct node 
{
    int data;
    struct node *next;
};
 
struct node *front = NULL;
struct node *rear = NULL;

int dequeue ()
{
    int a = -1;
    struct node *p = front;
    if(front == NULL)
        printf("queue is empty\n");
    else
    {
        front = front->next;
        a = p->data;
        free(p);
    }
    return a;
}


void *enqueue(int data)
{
    struct node *p  = (struct node *)malloc(sizeof(struct node));
    if(p == NULL)
        printf("queue is full !!");
    else{
        p->data = data;
        p->next = NULL;
        if(front == NULL){   
            front = rear = p;
        }
        else{
        rear->next = p;
        rear = p;
        }
    }
}

int main()
{
    int n;
    printf("enter the number of element you want to enqueue : ");
    scanf("%d",&n);

    //enqueue elements in the linked list : 
    for(int i =0;i<n;i++)
    {
        int a;
        printf("enter the element : ");
        scanf("%d",&a);
        enqueue(a);
    }
    
    int a = dequeue();
    printf("element : %d",a);
    
    return 0;
}