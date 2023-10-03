#include<stdio.h>
#include<stdlib.h>
struct edge;
struct vertex
{
    int info;
    struct vertex *nextVer;
    struct edge *first;
}*head = NULL;
struct edge 
{
    struct vertex *parent;
    struct edge *next;
};
void printData()
{
    struct vertex *temp = head;
    struct edge* e;
    while(temp!=NULL)
    {
        printf("%d",temp->info);
        e = temp->first;
        while(e!=NULL)
        {
            printf("->%d",e->parent->info);
            e = e->next;
        }
        temp = temp->nextVer;
    }
    printf("\n");
    

}
struct vertex * create(int info)
{
    struct vertex *new = (struct vertex*)malloc(sizeof(struct vertex));
    new->first = NULL;
    new->nextVer = NULL;
    return new;
}
void input_vertex(int info)
{
    struct vertex *v = create(info);
    if(head == NULL)
        head = v;
    else
    {
        struct vertex * temp = head;
        while(temp->nextVer != NULL)
            temp = temp->nextVer;
        temp->nextVer = v;
    }
}
struct vertex *find(int d)
{
    struct vertex *temp = head;
    while(temp != NULL)
    {
        if(temp->info == d)
            return temp;
        temp = temp->nextVer;
    }
    return NULL;
}

void input_edge(int source,int destination)
{
    struct vertex *s = find(source);
    struct vertex *d = find(destination);
    struct edge *e = (struct edge*)malloc(sizeof(struct edge));
    e->parent = s;
    e->next = NULL;
    if(s == NULL || d == NULL)
    {
        printf("invalid source or destination !!");
        return;
    }
    if(s->first == NULL)
    {
        s->first = e;
    }
    struct edge *temp = s->first;
    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = e;
}
int main()
{


    return 0;
}