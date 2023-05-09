#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Graph
{
    int vertexNum;
    int **edges;
};

// TODO  shortest table

void addEdge(struct Graph *graph, int i, int j, int weight)
{
    (graph->edges)[i][j] = weight;
}

void dijkstra(struct Graph *graph, int i) {
    // TODO
}

void printPath(int dest) {
    // TODO
}

int main(int argc, char *argv[])
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->vertexNum = 8;
    graph->edges = (int **)malloc(sizeof(int *) * graph->vertexNum);
    for (int i = 0; i < graph->vertexNum; i++)
    {
        (graph->edges)[i] = (int *)malloc(sizeof(int) * graph->vertexNum);
        for (int j = 0; j < graph->vertexNum; j++)
        {
            (graph->edges)[i][j] = 0;
        }
    }
    addEdge(graph, 0, 1, 1);
    addEdge(graph, 0, 2, 3);
    addEdge(graph, 0, 3, 1);
    addEdge(graph, 1, 4, 4);
    addEdge(graph, 1, 2, 5);
    addEdge(graph, 2, 4, 1);
    addEdge(graph, 2, 5, 6);
    addEdge(graph, 3, 5, 9);
    addEdge(graph, 4, 6, 4);
    addEdge(graph, 5, 6, 4);
    addEdge(graph, 5, 7, 2);

    dijkstra(graph, 0);
    printPath(6);

    return 0;
}