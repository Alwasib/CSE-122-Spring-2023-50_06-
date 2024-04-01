#include <stdio.h>
#include <stdbool.h>
#define mx_size 6
#define mx_node 100
// structure of queue
typedef struct {
    int items[mx_size];
    int front, rear;
} Queue;
//graph adjacency matrix
int adjMatrix[mx_node][mx_node] = {0};
int numNodes;
//function of queue
Queue crtQueue() {
    Queue q;
    q.front = -1;
    q.rear = -1;
    return q;
}
void enqueue(Queue *q, int value) {
    if ((q->rear + 1) % mx_size == q->front) {
        printf("Queue full can't enqueue.\n");
        return;
    }
    if (q->front == -1)
        q->front = 0;
    q->rear = (q->rear + 1) % mx_size;
    q->items[q->rear] = value;
}

int dequeue(Queue *q) {
    int value;
    if (q->front == -1) {
        printf("Queue empty can't dequeue.\n");
        return -1;
    }
    value = q->items[q->front];
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % mx_size;
    }
    return value;
}

void showQueue(Queue *q) {
    if (q->front == -1) {
        printf("Queue empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = q->front;
    do {
        printf("%d ", q->items[i]);
        i = (i + 1) % mx_size;
    } while (i != (q->rear + 1) % mx_size);
    printf("\n");
}
//funtion of graph
void addingedge(int source, int destination) {
    adjMatrix[source][destination] = 1;
}

void BFS(int startNode) {
    bool visited[mx_node] = {false};
    Queue q = crtQueue();

    visited[startNode] = true;
    enqueue(&q, startNode);

    printf("Breadth First Traversal starting from node %d: ", startNode);

    while (q.front != -1) {
        int crnode = dequeue(&q);
        printf("%d ", crnode);

        for (int i = 0; i < numNodes; ++i) {
            if (adjMatrix[crnode][i] == 1 && !visited[i]) {
                visited[i] = true;
                enqueue(&q, i);
            }
        }
    }

    printf("\n");
}

void showAdjMatrix() {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }
}
//showing the result
int main() {
    int numEdges, source, destination;

    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);
    if (numNodes > mx_node) {
        printf("Number of nodes exceeds the maximum limit.\n");
        return 1;
    }

    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);

    printf("Enter the edges (source destination):\n");
    for (int i = 0; i < numEdges; i++) {
        scanf("%d %d", &source, &destination);
        if (source < 0 || source >= numNodes || destination < 0 || destination >= numNodes) {
            printf("Invalid edge. Node index out of bounds.\n");
            return 1;
        }
        addingedge(source, destination);
    }

    printf("\n");
    showAdjMatrix();
    //bfs performing for each node
    for (int i = 0; i < numNodes; ++i) {
        BFS(i);
    }

    return 0;
}

