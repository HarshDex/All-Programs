#include <stdio.h>
#include<stdbool.h>
#define MAX_NODES 100
bool isCyclicDFS(int adjMatrix[MAX_NODES][MAX_NODES], int nodes, int current, bool visited[], bool
recursionStack[])
{
visited[current] = true;
recursionStack[current] = true;
for (int i = 0; i < nodes; i++)
{
if (adjMatrix[current][i])
{
if (!visited[i])
{
if (isCyclicDFS(adjMatrix, nodes, i, visited, recursionStack))
return true;
}
else if (recursionStack[i])
{
return true;
}
}
}
recursionStack[current] = false;
return false;
}
bool isCyclic(int adjMatrix[MAX_NODES][MAX_NODES], int nodes)
{
bool visited[MAX_NODES] = {false}; // Array to store visited nodes
bool recursionStack[MAX_NODES] = {false}; // Array to store nodes in recursion stack
for (int i = 0; i < nodes; i++)
{
if (!visited[i])
{
if (isCyclicDFS(adjMatrix, nodes, i, visited, recursionStack))
return true;
}
}
return false;
}
int main()
{
int adjMatrix[MAX_NODES][MAX_NODES] = {{0, 1, 1, 0, 0},
{0, 0, 0, 1, 1},
{0, 1, 0, 1, 0},
{0, 0, 0, 0, 1},
{0, 0, 0, 0, 0}};
if (isCyclic(adjMatrix, 5))
{
printf("Yes Cycle Exists\n");
}
else
{
printf("No Cycle Exists\n");
}
return 0;
}