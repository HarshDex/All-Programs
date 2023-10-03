#include <stdio.h>
#include <stdbool.h>
#include<limits.h>
#define MAX_CITIES 100
int prim(int cost[MAX_CITIES][MAX_CITIES], int n) {
int selected[MAX_CITIES];
int minCost = 0;
for (int i = 0; i < n; i++)
selected[i] = false;
selected[0] = true;
for (int edgeCount = 0; edgeCount < n - 1; edgeCount++) {
int min = INT_MAX;
int u, v;
for (int i = 0; i < n; i++) {
if (selected[i]) {
for (int j = 0; j < n; j++) {
if (!selected[j] && cost[i][j] && cost[i][j] < min) {
min = cost[i][j];
u = i;
v = j;
}
}
}
}
selected[v] = true;
minCost += min;
}
return minCost;
}
int main() {
int cost[MAX_CITIES][MAX_CITIES]={{0,0,7,5,0,0,0},
{0,0,8,5,0,0,0},
{7,8,0,9,7,0,0},
{5,0,9,0,15,6,0},
{0,5,7,15,0,8,9},
{}};
int minimumCost = prim(cost, 7);
printf("Minimum cost required to connect cities: %d\n", minimumCost);
return 0;
}