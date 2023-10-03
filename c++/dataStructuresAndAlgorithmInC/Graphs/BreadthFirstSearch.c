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
    q.size = 500;
    q.arr = (int*)malloc(q.size*sizeof(int));
    q.front = q.rear = -1;

    //bfs implementation

    int i =0;
    int node;
    int visited[7] = {0,0,0,0,0,0,0};
    int a[7][7] = 
    {
    {0,1,1,1,0,0,0},
    {1,0,1,0,0,0,0},
    {1,1,0,1,1,0,0},
    {1,0,1,0,1,0,0},
    {0,0,1,1,0,1,1},
    {0,0,0,0,0,1,0},
    {0,0,0,0,0,1,0}
    };
    printf("Node : %d ",i);
    visited[i] = 1;
    enqueue(&q,i);
    while(!isEmpty(&q))
    {
        int node = dequeue(&q);
        for(int j =0;j<7;j++)
        {
            if(a[node][j] == 1 && visited[j] == 0)
            {
                printf(" %d ",j);
                visited[j]=1;
                enqueue(&q,j);
            }
        }
    }
}
