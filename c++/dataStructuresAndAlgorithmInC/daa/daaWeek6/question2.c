#include <stdio.h>
#include <stdbool.h>
#define MAX_NODES 100
bool isBipartite(int adjMatrix[MAX_NODES][MAX_NODES], int nodes)
{
int colors[MAX_NODES] = {0};
int queue[MAX_NODES];
int front = 0, rear = -1;
colors[0] = 1;
queue[++rear] = 0;
while (front <= rear)
{
int currentNode = queue[front++];
for (int i = 0; i < nodes; i++)
{
if (adjMatrix[currentNode][i])
{
if (colors[i] == 0)
{
colors[i] = 3 - colors[currentNode];
queue[++rear] = i;
}
else if (colors[i] == colors[currentNode])
{
return false;
}
}
}
}
return true;
}
int main()
{
int adjMatrix[MAX_NODES][MAX_NODES] = {{0, 1, 1, 0, 0},
{1, 0, 1, 1, 1},
{1, 1, 0, 1, 0},
{0, 1, 1, 0, 1},
{0, 1, 0, 1, 0}};
if (isBipartite(adjMatrix, 5))
{
printf("Yes Bipartite\n");
}
else
{
printf("Not Bipartite\n");
}
return 0;
}