#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#define V 5
void printPath(int parent[], int vertex) {
if (vertex < 0)
return;
printPath(parent, parent[vertex]);
printf("%d-> ", vertex);
}
void bellmanFord(int graph[V][V], int src) {
int dist[V];
int parent[V];
for (int i = 0; i < V; i++) {
dist[i] = INT_MAX;
parent[i] = -1;
}
dist[src] = 0;
for (int k = 0; k < V - 1; k++) {
for (int u = 0; u < V; u++) {
for (int v = 0; v < V; v++) {
if (graph[u][v] != 0 && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
dist[v] = dist[u] + graph[u][v];
parent[v] = u;
}
}
}
}
for (int u = 0; u < V; u++) {
for (int v = 0; v < V; v++) {
if (graph[u][v] != 0 && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
printf("Negative-weight cycle found. Cannot compute shortest paths.\n");
return;
}
}
}
for (int i = 0; i < V; i++) {
if (i != src) {
printf("Shortest path from %d to %d: ", i, src);
printPath(parent, i);
printf("Distance: %d\n", dist[i]);
}
}
}
int main() {
int graph[V][V] = {
{0, 4, 1, 0, 0},
{0, 0, 0, 0, 4},
{0, 2, 0, 4, 0},
{0, 0, 0, 0, 4},
{0, 0, 0, 0, 0}
};
int source = 0;
bellmanFord(graph, source);
return 0;
}