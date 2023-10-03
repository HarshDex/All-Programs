#include<stdio.h>
#include<stdlib.h>
struct queue{
    int front;
    int rear;
    int size;
    int *ar;
};
int isFull(struct queue *q){
    if(q->rear == q->size)
        return 1;
    else
        return 0;
}
int isEmpty(struct queue *q){
    if(q->rear == q->front)
        return 1;
    else
        return 0;
}
void enqueue(struct queue *q,int data){
    if(isFull(q)){
        return ;
    }
    else{
        q->rear++;
        q->ar[q->rear] = data;
        return;
    }
}
int dequeue(struct queue *q){
    if(isEmpty(q)){
        return -1;
    }
    else{
        q->front++;
        return q->ar[q->front];
    }
}
void bfs(int n,int ar[n][n],int *visited){
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->front = q->rear = -1;
    q->size = 100;
    q->ar = (int*)malloc(q->size*sizeof(int));
    int i =0;
    visited[i] = 1;
    enqueue(q,i);
    printf("%d ",i);
    while(!isEmpty(q)){
        int node = dequeue(q);
        for(int j = 0;j<n;j++){
            if(ar[node][j] == 1 && !visited[j]){
                printf("%d ",j);
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

    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            ar[i][j] = 0;
        }
    }

    int e;
    printf("enter the number of edges present in the graph : ");
    scanf("%d",&e);
    for(int i =0;i<e;i++){
        int s;
        int d;
        printf("enter the source : ");
        scanf("%d",&s);
        printf("enter the destination : ");
        scanf("%d",&d);
        ar[s][d] = 1;
    }

    int visited[n];
    for(int i =0;i<n;i++)
    {
        visited[i] = 0;
    }
    bfs(n,ar,visited);
    return 0;
}