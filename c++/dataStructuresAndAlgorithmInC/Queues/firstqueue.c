#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int *arr;
    int front;
    int rear;
};
int isEmpty(struct queue *q)
{
    if(q->rear == q->front)
        return 1;
    return 0;
}
int isFull(struct queue *q)
{
    if(q->rear == q->size-1)
        return 1;
    return 0;
}
void enqueue(struct queue *q,int data)
{
    if(isFull(q))
    {
        printf("cannot enqueue element queue is full !!");
        exit(0);
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = data;
    }
}
int dequeue(struct queue*q)
{
    if(isEmpty(q))
    {
        printf("cannot dequeue elements , queue is empty ");
        exit(1);
    }
    else
    {
        q->front++;
        int a = q->arr[q->front];
        return a;
    }
}
int main()
{
    struct queue q;
    printf("enter the size of  the queue : ");
    scanf("%d",&q.size);
    q.arr = (int*)malloc(q.size*sizeof(int));

    q.front = q.rear = -1;

    int n;
    printf("enter the number of element you want to enqueue in the queue : ");
    scanf("%d",&n);

    int a;
    for(int i =0;i<n;i++)
    {
        printf("enter the %d - element : ",i+1);
        scanf("%d",&a);
        enqueue(&q,a);
    }

    int m;
    printf("enter the number of elements you want to dequeue from the queue : ");
    scanf("%d",&m);
    printf("elements are : ");
    for(int i =0;i<m;i++)
    {
        int a = dequeue(&q);
        printf("%d ",a);
    }
    return 0;
}
