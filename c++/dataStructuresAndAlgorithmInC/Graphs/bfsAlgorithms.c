// A standard BFS implementation puts each vertex of the graph into one of two categories:

// Visited
// Not Visited
// The purpose of the algorithm is to mark each vertex as visited while avoiding cycles.

// - The algorithm works as follows:

// ->Start by putting any one of the graph's vertices at the back of a queue.
// ->Take the front item of the queue and add it to the visited list.
// ->Create a list of that vertex's adjacent nodes. Add the ones which aren't in the       visited list to the back of the queue.
// ->Keep repeating steps 2 and 3 until the queue is empty.
// ->The graph might have two different disconnected parts so to make sure that we cover every vertex, we can also run the BFS algorithm on every node

#include<stdio.h>
struct queue 
{
    int size;
    int front;
    int rear;
    int *ar;
};
struct graph
{
    int data;
    struct graph *left;
    struct graph *right;
};
struct graph *create(int data)
{
    struct graph * p = (struct graph*)malloc(sizeof(struct graph));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
int visited[100];
void bfs(struct graph* root,struct queue *q)
{

    if(root!=NULL && q->ar[q->front]);
}
int main()
{


    return 0;
}