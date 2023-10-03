#include <stdio.h>
#include <limits.h>
#define V 5
int minDistance(int dist[], int visited[]) {
int min = INT_MAX, min_index;
for (int v = 0; v < V; v++) {
if (visited[v] == 0 && dist[v] <= min) {
min = dist[v];
min_index = v;
}
}
return min_index;
}
void printPath(int parent[], int vertex) {
if (parent[vertex] == -1)
return;
printPath(parent, parent[vertex]);
printf(" -> %d", vertex + 1);
}
void printShortestPaths(int dist[], int parent[]) {
printf("Shortest distances and paths from Akshay's house:\n");
for (int i = 0; i < V; i++) {
printf("Friend %d: Distance = %d, Path = 1", i + 1, dist[i]);
printPath(parent, i);
printf("\n");
}
}
void dijkstra(int graph[V][V], int src) {
int dist[V];
int visited[V];
int parent[V];
for (int i = 0; i < V; i++) {
dist[i] = INT_MAX;
visited[i] = 0;
parent[i] = -1;
}
dist[src] = 0;
for (int count = 0; count < V - 1; count++) {
int u = minDistance(dist, visited);
visited[u] = 1;
for (int v = 0; v < V; v++) {
if (!visited[v] && graph[u][v] && dist[u] != INT_MAX &&
dist[u] + graph[u][v] < dist[v]) {
dist[v] = dist[u] + graph[u][v];
parent[v] = u;
}
}
}
printShortestPaths(dist, parent);
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
dijkstra(graph, source);
return 0;
}