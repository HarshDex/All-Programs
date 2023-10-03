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
        printf("queue is full !!");
        return;
    }
    else{
    q->ar[++q->r] = data;
    }
}

int dequeue(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("queue underflow!!");
        return -1;
    }
    else
    {
        return q->ar[++q->f];
    }
}

void bst(int **ar,int n,struct queue *q)
{
    int visited[n];
    for(int i =0;i<n;i++)
        visited[i] = 0;
    
    int i = 0;
    printf("%d",i);
    while(!isEmpty(q))
    {
        int node = dequeue(q);
        for(int j =0;j<n;j++)
        {
            if(ar[node][j] == 1 && visited[node] == 0)
            {
                printf("%d ",j);
                visited[j] =1 ;
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

    struct queue q;
    q.size = n;
    q.f = q.r = -1;

    q.ar = (int*)malloc(q.size*sizeof(int));

    int ar[n][n];
    
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
            ar[i][j] = 0;
    }

    int m;
    printf("enter the number of connections : ");
    scanf("%d",&m);
    
    int a,b;
    for(int i =0;i<m;i++)
    {
        printf("enter the source : ");
        scanf("%d",&a);
        printf("enter the destination : ");
        scanf("%d",&b);
        ar[a][b] = 1;
    }

    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
            printf("%d ",ar[i][j]);
        printf("\n");
    }

    bst(ar,n,&q);

    return 0;
}