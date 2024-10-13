//Determine if a graph is Bipartite Graph using DFS

#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100

bool isBipartiteUtil(int graph[MAX_VERTICES][MAX_VERTICES], int V, int v, int color[]) {
    for (int u = 0; u < V; u++) {
        // Check if there's an edge between vertices v and u and u is colored with the same color as v
        if (graph[v][u] && color[u] == color[v])
            return false;
        
        // If u is not colored yet, color it with the opposite color of v and recursively check its neighbors
        if (graph[v][u] && color[u] == -1) {
            color[u] = 1 - color[v];
            if (!isBipartiteUtil(graph, V, u, color))
                return false;
        }
    }
    return true;
}

bool isBipartite(int graph[MAX_VERTICES][MAX_VERTICES], int V) {
    // Create an array to store the color of each vertex
    // Initialize all colors as uncolored (-1)
    int color[V];
    for (int i = 0; i < V; i++)
        color[i] = -1;
    
    // Start DFS traversal from each vertex
    for (int i = 0; i < V; i++) {
        if (color[i] == -1) {
            color[i] = 1; // Color the first vertex arbitrarily
            if (!isBipartiteUtil(graph, V, i, color))
                return false;
        }
    }
    return true;
}

int main() {
    int graph[MAX_VERTICES][MAX_VERTICES] = {
        {0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 0, 1, 0}
    };
    int V = 4; // Number of vertices in the graph

    if (isBipartite(graph, V))
        printf("Graph is Bipartite\n");
    else
        printf("Graph is not Bipartite\n");

    return 0;
}