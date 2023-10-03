#include<stdio.h>
#include<stdlib.h>
struct edge;
struct  node 
{
    int vertex;
    struct node *next;
    struct edge *firstEdge;
};
struct edge
{
    struct vertex *destination;
    struct node *nextedge;
};
//adding vertices
void insert_vertex(struct node *vertex,int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->vertex = NULL;
    p->next = NULL;
    p->firstEdge = NULL;
    if(vertex == NULL)
    {
        vertex = p;
        return;
    }
    struct node*temp = vertex;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next= p;
}
//finding the node
struct node *find(struct node * ver,int d)
{
    while(ver != NULL)
    {
        if(ver->vertex == d)
            return ver;
        ver = ver->next;
    }
    return NULL;
}
//printing the graph
void print(struct node *ver)
{
    struct node *temp = ver;
    struct edge *e;
    while(temp != NULL)
    {
        printf("%d ",temp->vertex);
        e = temp->firstEdge;
        while(e != NULL)
        {
            printf("->%d",e->destination->vertex);
            e = e->nextedge;
        }
    }
    printf("\n");
    temp = temp->next;
}

// adding edges to the vertex 
void insert_edge(struct node * ver,int s,int e)
{
    struct node *start = find(ver,s);
    struct node *end = find(ver,e);
    struct edge *new = (struct edge*)malloc(sizeof(struct edge));
    new->destination = end;
    new->nextedge=NULL;
    if(start->firstEdge == NULL)
    {
        start->firstEdge = new;
        return;
    }
    struct edge *temp = start->firstEdge;
    while(temp->nextedge != NULL)
    {
        temp = temp->nextedge;
    }
    temp->nextedge = new;
}
int main()
{
    struct node *ver = NULL;
    insert_vertex(ver,55);
    insert_vertex(ver,33);
    insert_vertex(ver,21);
    insert_vertex(ver,76);



  return 0;
}