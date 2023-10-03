#include <stdio.h>
#include <stdlib.h>
int V=7;
typedef struct {
int source;
int destination;
int cost;
} Edge;
typedef struct {
int parent;
int rank;
} Subset;
int find(Subset subsets[], int city) {
if (subsets[city].parent != city)
subsets[city].parent = find(subsets, subsets[city].parent);
return subsets[city].parent;
}
void unionSets(Subset subsets[], int city1, int city2) {
int root1 = find(subsets, city1);
int root2 = find(subsets, city2);
if (subsets[root1].rank < subsets[root2].rank)
subsets[root1].parent = root2;
else if (subsets[root1].rank > subsets[root2].rank)
subsets[root2].parent = root1;
else {
subsets[root2].parent = root1;
subsets[root1].rank++;
}
}
int compareEdges(const void* a, const void* b) {
Edge* edge1 = (Edge*)a;
Edge* edge2 = (Edge*)b;
return edge1->cost - edge2->cost;
}
void findMinimumCost(int V,int costMatrix[V][V]) {
Edge edges[V * V];
int edgeCount = 0;
for (int i = 0; i < V; i++) {
for (int j = i + 1; j < V; j++) {
if (costMatrix[i][j] != 0) {
edges[edgeCount].source = i;
edges[edgeCount].destination = j;
edges[edgeCount].cost = costMatrix[i][j];
edgeCount++;
}
}
}
qsort(edges, edgeCount, sizeof(Edge), compareEdges);
Subset subsets[V];
for (int i = 0; i < V; i++) {
subsets[i].parent = i;
subsets[i].rank = 0;
}
Edge mst[V - 1];
int mstCount = 0;
int totalCost = 0;
for (int i = 0; i < edgeCount; i++) {
int source = edges[i].source;
int destination = edges[i].destination;
int sourceRoot = find(subsets, source);
int destinationRoot = find(subsets, destination);
if (sourceRoot != destinationRoot) {
mst[mstCount++] = edges[i];
unionSets(subsets, sourceRoot, destinationRoot);
totalCost += edges[i].cost;
}
}
printf("Minimum cost required to connect the cities: %d\n", totalCost);
}
int main() {
int costMatrix[7][7]={{0,0,7,5,0,0,0},
{0,0,8,5,0,0,0},
{7,8,0,9,7,0,0},
{5,0,9,0,15,6,0},
{0,5,7,15,0,8,9},
{0,0,0,6,8,0,11},
{0,0,0,0,9,11,0}};;
findMinimumCost(7,costMatrix);
return 0;
}