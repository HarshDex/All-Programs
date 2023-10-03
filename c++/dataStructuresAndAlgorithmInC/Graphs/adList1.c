#include<stdio.h>
#include<stdlib.h>
struct edge;
struct vertex
{
    int data;
    struct vertex *nextver;
    struct edge * firstedge;
};
struct edge
{
    struct vertex *des;
    struct edge *newedge;
};
void insert_vertex(struct vertex *v,int d)
{
    struct vertex *new = (struct vertex *)malloc(sizeof(struct vertex));
    if(v == NULL)
    {
        v = new;
        return;
    }      
    struct vertex *temp = v;
    while(temp->nextver != NULL)  
    {
        temp = temp->nextver;
    }
    temp->nextver = new;
}
struct node *find(struct vertex *v,int d)
{
    if(v == NULL || v->nextver  = NULL)
        return v;
    
}
void insert_edge(struct vertex *v,int start,int end)
{

}
int main()
{



  return 0;
}