#include <stdio.h> 
int getMin(int a, int b) {
    return (a < b) ? a : b;
}
int	shortestPathWithKEdges(int	graph[][100],	int	numVertices,	int	source,	int destination, int k) {
int distance[numVertices][numVertices]; for (int i = 0; i < numVertices; i++) {
for (int j = 0; j < numVertices; j++) {
if (i == j)
distance[i][j] = 0;
else if (graph[i][j] != 0) distance[i][j] = graph[i][j];
else
distance[i][j] = 999999;
}
}
for (int count = 0; count <= k; count++) { for (int i = 0; i < numVertices; i++) {
for (int j = 0; j < numVertices; j++) {
if (distance[i][count] + distance[count][j] < distance[i][j])
distance[i][j] = distance[i][count] + distance[count][j]; }
}
}
return distance[source][destination];
} int main() {
int numVertices, source, destination, numEdges; printf("Enter the number of vertices: "); scanf("%d", &numVertices); int graph[100][100]; printf("Enter the adjacency matrix:\n"); for (int i = 0; i < numVertices; i++) {
for (int j = 0; j < numVertices; j++) {
scanf("%d", &graph[i][j]);
}
}
printf("Enter the source vertex: "); scanf("%d", &source);
printf("Enter the destination vertex: "); scanf("%d", &destination);
printf("Enter the number of edges on the path: ");
int	shortestPathWeight	=	shortestPathWithKEdges(graph,	numVertices,	source,
destination, numEdges);
printf("Weight of the shortest path from source to destination with exactly %dedges: %d\n", numEdges, shortestPathWeight);
return 0;
}
