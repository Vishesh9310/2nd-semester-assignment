//Breadth First Search (BFS) Iterative & Recursive implementation
/*
#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100

typedef struct {
    int queue[MAX_VERTICES];
    int front, rear;
} Queue;

void initQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

bool isEmpty(Queue *q) {
    return (q->front == -1 && q->rear == -1);
}

void enqueue(Queue *q, int value) {
    if (isEmpty(q)) {
        q->front = 0;
        q->rear = 0;
    } else {
        q->rear++;
    }
    q->queue[q->rear] = value;
}

int dequeue(Queue *q) {
    int value = q->queue[q->front];
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front++;
    }
    return value;
}

bool isVisited[MAX_VERTICES];
int graph[MAX_VERTICES][MAX_VERTICES]; // Adjacency matrix representation of graph
int numVertices;

void bfs(int start) {
    Queue q;
    initQueue(&q);
    enqueue(&q, start);
    isVisited[start] = true;

    while (!isEmpty(&q)) {
        int vertex = dequeue(&q);
        printf("%d ", vertex);

        for (int i = 0; i < numVertices; i++) {
            if (graph[vertex][i] && !isVisited[i]) {
                enqueue(&q, i);
                isVisited[i] = true;
            }
        }
    }
}

int main() {
    // Example graph
    numVertices = 4;
    int startVertex = 0;
    for (int i = 0; i < numVertices; i++) {
        isVisited[i] = false;
        for (int j = 0; j < numVertices; j++) {
            graph[i][j] = 0;
        }
    }
    graph[0][1] = 1;
    graph[0][2] = 1;
    graph[1][2] = 1;
    graph[2][0] = 1;
    graph[2][3] = 1;
    graph[3][3] = 1;

    printf("BFS Traversal: ");
    bfs(startVertex);

    return 0;
}*/




//Recursive bfs

#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100

bool isVisited[MAX_VERTICES];
int graph[MAX_VERTICES][MAX_VERTICES]; // Adjacency matrix representation of graph
int numVertices;

void bfs(int start) {
    printf("%d ", start);
    isVisited[start] = true;

    for (int i = 0; i < numVertices; i++) {
        if (graph[start][i] && !isVisited[i]) {
            bfs(i);
        }
    }
}

int main() {
    // Example graph
    numVertices = 4;
    int startVertex = 0;
    for (int i = 0; i < numVertices; i++) {
        isVisited[i] = false;
        for (int j = 0; j < numVertices; j++) {
            graph[i][j] = 0;
        }
    }
    graph[0][1] = 1;
    graph[0][2] = 1;
    graph[1][2] = 1;
    graph[2][0] = 1;
    graph[2][3] = 1;
    graph[3][3] = 1;

    printf("BFS Traversal: ");
    bfs(startVertex);

    return 0;
}