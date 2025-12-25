#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Maximum number of vertices in the graph
#define MAX_VERTICES 100

// Queue data structure for BFS
struct Queue {
    int items[MAX_VERTICES];
    int front;
    int rear;
};

// Create a queue
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

// Check if the queue is empty
bool isEmpty(struct Queue* queue) {
    return (queue->front == -1);
}

// Enqueue an item to the queue
void enqueue(struct Queue* queue, int item) {
    if (queue->rear == MAX_VERTICES - 1) {
        printf("Queue is full\n");
    } else {
        if (queue->front == -1) {
            queue->front = 0;
        }
        queue->rear++;
        queue->items[queue->rear] = item;
    }
}

// Dequeue an item from the queue
int dequeue(struct Queue* queue) {
    int item;
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        item = -1;
    } else {
        item = queue->items[queue->front];
        queue->front++;
        if (queue->front > queue->rear) {
            queue->front = queue->rear = -1;
        }
    }
    return item;
}

// Graph data structure with adjacency matrix
struct Graph {
    int vertices;
    int matrix[MAX_VERTICES][MAX_VERTICES];
};

// Initialize a graph with n vertices
void initGraph(struct Graph* graph, int vertices) {
    graph->vertices = vertices;
    int i,j;
    for (i = 0; i < MAX_VERTICES; i++) {
        for ( j = 0; j < MAX_VERTICES; j++) {
            graph->matrix[i][j] = 0;
        }
    }
}

// Add an edge to the graph
void addEdge(struct Graph* graph, int start, int end) {
    graph->matrix[start][end] = 1;
    graph->matrix[end][start] = 1;
}

// BFS traversal of the graph
void BFS(struct Graph* graph, int startVertex) {
    bool visited[MAX_VERTICES];
    int i;
    for (i = 0; i < MAX_VERTICES; i++) {
        visited[i] = false;
    }

    struct Queue* queue = createQueue();

    visited[startVertex] = true;
    printf("BFS starting from vertex %d: ", startVertex);
    printf("%d ", startVertex);

    enqueue(queue, startVertex);

    while (!isEmpty(queue)) {
        int currentVertex = dequeue(queue);
		int i;
        for ( i = 0; i < graph->vertices; i++) {
            if (graph->matrix[currentVertex][i] == 1 && !visited[i]) {
                printf("%d ", i);
                visited[i] = true;
                enqueue(queue, i);
            }
        }
    }

    printf("\n");
}

int main() {
    struct Graph graph;
    int vertices, edges;
    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &vertices, &edges);

    initGraph(&graph, vertices);
	int i;
    for (i = 0; i < edges; i++) {
        int start, end;
        printf("Enter edge (start end): ");
        scanf("%d %d", &start, &end);
        addEdge(&graph, start, end);
    }

    int startVertex;
    printf("Enter the starting vertex for BFS: ");
    scanf("%d", &startVertex);

    BFS(&graph, startVertex);

    return 0;
}
