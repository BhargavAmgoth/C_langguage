#include <stdio.h>

#define VERTICES 6

static void depth_first(const int graph[VERTICES][VERTICES], int vertex,
                        int visited[VERTICES])
{
    int next;

    visited[vertex] = 1;
    printf("%d ", vertex);
    for (next = 0; next < VERTICES; next++) {
        if (graph[vertex][next] && !visited[next])
            depth_first(graph, next, visited);
    }
}

static void breadth_first(const int graph[VERTICES][VERTICES], int start)
{
    int queue[VERTICES];
    int visited[VERTICES] = {0};
    int front = 0;
    int rear = 0;

    queue[rear++] = start;
    visited[start] = 1;
    while (front < rear) {
        int vertex = queue[front++];
        int next;
        printf("%d ", vertex);
        for (next = 0; next < VERTICES; next++) {
            if (graph[vertex][next] && !visited[next]) {
                visited[next] = 1;
                queue[rear++] = next;
            }
        }
    }
}

int main(void)
{
    const int graph[VERTICES][VERTICES] = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 1, 0},
        {1, 0, 0, 0, 0, 1},
        {0, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0}
    };
    int visited[VERTICES] = {0};

    printf("BFS from vertex 0: ");
    breadth_first(graph, 0);
    printf("\nDFS from vertex 0: ");
    depth_first(graph, 0, visited);
    putchar('\n');
    return 0;
}
