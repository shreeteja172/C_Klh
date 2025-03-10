#include <stdio.h>
#include <stdbool.h>

#define MAX 7

int adj[MAX][MAX];   // Adjacency Matrix
bool visited[MAX];   // Visited Array

// Initialize structures
void initGraph() {
	for(int i = 0; i < MAX; i++) {
		visited[i] = false;
		for(int j = 0; j < MAX; j++) {
			adj[i][j] = 0;
		}
	}
}
int queue[MAX];
int front = 0, rear = 0;
void enqueue(int x) {
	queue[rear++] = x;
}
int dequeue() {
	return queue[front++];
}
bool isEmpty() {
	return (front == rear);
}
void addEdge(int u, int v) {
	adj[u][v] = 1;
	adj[v][u] = 1;
}


// BFS function
void BFS(int start) {
	visited[start] = true;
	enqueue(start);

	while(!isEmpty()) {
		int vertex = dequeue();
		// Process the vertex
		printf("%d ", vertex);

		// Check and enqueue neighbors
		for(int i = 0; i < MAX; i++) {
			if(adj[vertex][i] == 1 && !visited[i]) {
				visited[i] = true;
				enqueue(i);
			}
		}
	}
}
int main() {
	// Initialize structures
	initGraph();

	// Build a simple graph
	addEdge(0, 1);
	addEdge(0, 2);
	addEdge(1, 3);
	addEdge(1, 4);
	addEdge(2, 5);
	addEdge(3, 6);

	// BFS from vertex 0
	printf("BFS Traversal: ");
	BFS(0);
	printf("\n");

	return 0;
}