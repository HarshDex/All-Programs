#include<stdio.h>
#include<malloc.h>
struct queue
{
    int size;
    int f;
    int r;
    int *ar;
};
int isFull(struct queue *q)
{
    if(q->r == q->size-1)
        return 1;
    return 0;
}
int isEmpty(struct queue *q)
{
    if(q->r == q->f)
        return 1;
    return 0;
}
void enqueue(struct queue *q,int n)
{
    if(isFull(q))
    {
        printf("cannot enque element , queue is already full !!\n");
        return;
    }
    else{
    q->r++;
    q->ar[q->r] = n;
    }
}
int dequeue(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("cannot deque element , queue is empty!!\n");
        return -1;
    }
    else{
    q->f++;
    int a = q->ar[q->f];
    return a;
    }
}
int main()
{
    struct queue q;
    printf("enter the size of the queue : ");
    scanf("%d",&q.size);
    q.ar = (int*)malloc(q.size*sizeof(int));

    q.f = -1;
    q.r = -1;
    int n;
    printf("enter the number of element you want to enter in the queue : ");
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        int a;
        printf("enter the element : ");
        scanf("%d",&a);
        enqueue(&q,a);
    }
    int a = dequeue(&q);
    printf("element : %d",a);
    return 0;
}