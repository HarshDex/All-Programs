#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *ar;
};
int isFull(struct queue *q)
{
    if((q->r+1 % q->size) == q->f)
        return 1;
    return 0;
}
int isEmpty(struct queue *q)
{
    if(q->r == q->size)
        return 1;
    return 0;
}
void enqueue(struct queue *q,int data)
{
    if(isFull(q))
    {
        printf("cannot enque!! \nqueue overflow...");
        return;
    }
    q->r = (q->r+1) % q->size;
    q->ar[q->r] = data;
}
int dequeue(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("cannot enque!! \nqueue overflow...");
        return -1;
    }
    q->f =  (q->f+1) % q->size;
    return q->ar[q->f];
}
int main()
{
    struct queue q;
    printf("enter the size of the queue :");
    scanf("%d",&q.size);

    q.f = q.r = -1;
    q.ar = (int*)malloc(q.size*sizeof(int));

    int n;
    printf("enter the number of element you want to enqueue in the circular queue : ");
    scanf("%d",&n);

    for(int i =0;i<n;i++)
    {
        int a; 
        printf("enter element : ");
        scanf("%d",&a);
        enqueue(&q,a);
    }printf("\n");

    int m;
    printf("enter the element you want to dequeue : ");
    scanf("%d",&m);

    for(int i =0;i<m;i++)
    {
        printf("%d ",dequeue(&q));
    }printf("\n");
   return 0;
}