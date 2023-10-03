#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int vertex;
    struct node *next;
};
struct graph
{
    int numVertices;
    struct node **adjList;
};
struct node *create(int vertex)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->vertex = vertex;
    p->next = NULL;
    return p;
}
struct graph *createGraph(int vertices)
{
    struct graph *G = (struct graph *)malloc(sizeof(struct graph));
    G->numVertices = vertices;
    G->adjList = (struct node*)malloc(vertices * sizeof(struct node));
    
    for(int i =0;i<vertices;i++)
        G->adjList[i] = NULL;

    return G;
}
void addEdge(struct graph *g,int start ,int des)
{
    struct node *new = create(des);
    new->next = g->adjList[start];
    g->adjList[start] = new;

    // add edge from des to start
    struct node *newnode = create(start);
    new->next = g->adjList[des];
    g->adjList[des] = new;
}
void printGraph(struct graph* g) {
  int v;
  for (v = 0; v < g->numVertices; v++) {
    struct node* temp = g->adjList[v];
    printf("\n Vertex %d\n: ", v);
    while (temp) {
      printf("%d -> ", temp->vertex);
      temp = temp->next;
    }
    printf("\n");
  }
}
int main()
{
  struct graph* g = createGraph(4);
  addEdge(g, 0, 1);
  addEdge(g, 0, 2);
  addEdge(g, 0, 3);
  addEdge(g, 1, 3);
  addEdge(g, 1, 0);
  addEdge(g, 1, 1);

  printGraph(g);


    return 0;
}