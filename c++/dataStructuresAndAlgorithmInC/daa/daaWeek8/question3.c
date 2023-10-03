#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int findMaxCostVertex(int costs[], bool visited[], int num_vertices) {
    int max_cost = INT_MIN;
    int max_vertex;

    for (int v = 0; v < num_vertices; v++) {
        if (!visited[v] && costs[v] > max_cost) {
            max_cost = costs[v];
            max_vertex = v;
        }
    }

    return max_vertex;
}

int findMaxSpanningWeight(int graph[][100], int num_vertices) {
    int costs[num_vertices]; 
    bool visited[num_vertices];
    int max_spanning_weight = 0; 

    for (int i = 0; i < num_vertices; i++) {
        costs[i] = 0;
        visited[i] = false;
    }

    costs[0] = 0;

    for (int i = 0; i < num_vertices - 1; i++) {
        int current_vertex = findMaxCostVertex(costs, visited, num_vertices);
        visited[current_vertex] = true;

        for (int v = 0; v < num_vertices; v++) {
            if (graph[current_vertex][v] && !visited[v] && graph[current_vertex][v] > costs[v]) {
                costs[v] = graph[current_vertex][v];
                max_spanning_weight += costs[v];
            }
        }
    }

    return max_spanning_weight;
}

int main() {
    int num_vertices;
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &num_vertices);

    int graph[100][100]; 
    printf("Enter the graph as an adjacency matrix:\n");
    for (int i = 0; i < num_vertices; i++) {
        for (int j = 0; j < num_vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    int max_spanning_weight = findMaxSpanningWeight(graph, num_vertices);
    printf("Maximum Spanning Weight: %d\n", max_spanning_weight);

    return 0;
}
