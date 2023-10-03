#include<stdio.h>
#include<stdlib.h>
struct edge;
struct node
{
    int info;
    struct node *nextver;
    struct edge *first;
};
struct edge
{
    struct node *parent;
    struct edge *next;
};
struct node *vertex = NULL;
struct node *create(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->info = data;
    p->first = NULL;
    p->nextver = NULL;
    return p;
}
void insert_vertex(struct node *vertex ,int data)
{
    struct node *p = create(data);
    if(vertex == NULL);
        vertex = p;
    struct node *temp = vertex;
    while(temp->nextver!=NULL)
    {
        temp = temp->nextver;
    }
    temp->nextver=p;
}
struct node *find(struct node *vertex ,int d)
{
    while(vertex != NULL)
    {
        if(vertex->info == d)
            return vertex;
        vertex = vertex->nextver;
    }
    return NULL;
}
void printData()
{
    struct node *temp = vertex;
    struct edge *e;
    while(temp != NULL)
    {
        printf("%d",vertex->info);
        e = temp->first;
        while(e!=NULL)
        {
            printf("->%d",e->parent->info);
            e = e->next;
        }
        temp = temp->nextver;
    }
    printf("\n");
}
void insert_edge(struct node *vertex , int source ,int destination)
{
    struct node *start = find(vertex,source);
    struct node *end = find(vertex,destination);
    struct edge *new = (struct edge*)malloc(sizeof(struct edge));
    new->parent = start;
    new->next = NULL;
    if(start->first == NULL)
    {
        start->first = new;
    }
    struct edge *temp = start->first;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = new;
}
int main()
{
    insert_vertex(vertex,1);
    insert_vertex(vertex,2);
    insert_vertex(vertex,3);
    insert_vertex(vertex,4);
    
    insert_edge(vertex,1,4);
    insert_edge(vertex,1,2);
    insert_edge(vertex,1,3);
    insert_edge(vertex,2,3);
    insert_edge(vertex,2,3);

    printData(vertex);


    return 0;
}