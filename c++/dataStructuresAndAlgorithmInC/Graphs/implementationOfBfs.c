#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *ar;
};
int isEmpty(struct queue *q)
{
    if(q->f == q->r)
        return 1;
    return 0;
}
int isFull(struct queue *q)
{
    if(q->r == q->size-1)
        return 1;
    return 0;
}
void enqueue(struct queue *q,int data)
{
    if(isFull(q))
    {
        printf("cannot enqueue!!");
        exit(0);
    }
    else 
    {
        q->r++;
        q->ar[q->r] = data;
    }
}
int dequeue(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("cannot dequeue elements , queue is empty ");
        exit(1);
    }
    else
    {
        q->f++;
        int a = q->ar[q->f];
        return a;
    }
}
void bfs(int **ar,int n)
{
    struct queue *q;
    q->size = 500;
    q->ar = (int*)malloc(q->size*sizeof(int));
    q->f = q->r = -1;
    int visited[n];
    for(int i =0;i<n;i++)
        visited[i] = 0;
    
    int node;
    int i =0;
    printf("%d ",i);
    visited[i] = 1;
    enqueue(q,i);
    while(!isEmpty(q))
    {
        int node = dequeue(q);
        for(int j = 0;j< n;j++)
        {
            if(ar[node][j] == 1 && visited[j] == 0)
            {
                printf(" %d ",j);
                visited[j] = 1;
                enqueue(q,j);
            }
        }
    }
    
}
int main()
{
    int n;
    printf("enter the number of vertices : ");
    scanf("%d",&n);

    int ar[n][n];

    int e;
    printf("enter the number of edges : ");
    scanf("%d",&e);

    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
            ar[i][j] = 0;
    }

    for(int i =0;i<e;i++)
    {
        int s,d;
        printf("enter the source vertex and destination vertex of the edge : ");
        scanf("%d %d",&s,&d);
        ar[s][d] = 1;
    }

    printf("bfs traversal of the graph : ");
    bfs(ar,n);
    return 0;
}