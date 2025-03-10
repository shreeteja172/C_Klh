# include <stdio.h>
# define MAX 7
int adj [ MAX ][ MAX ];
int visited [ MAX ];
// Add edges ( undirected )
void addEdge ( int u, int v) {
	adj [u ][ v] = 1;
	adj [v ][ u] = 1;
}
// Depth - First Search ( recursive )
void DFS ( int vertex ) {
	visited [ vertex ] = 1;
	printf ("%d ", vertex );
	for ( int i = 0; i < MAX ; i ++) {
		if ( adj [ vertex ][ i] == 1 &&
		        ! visited [i ]) {
			DFS (i);
		}
	}
}

int main () {
	for ( int i = 0; i < MAX ; i++) {
		visited [i] = 0;
		for ( int j = 0; j < MAX ; j
		        ++) {
			adj [i ][ j] = 0;
		}
	}
// Build a simple graph
	addEdge (0, 1) ;
	addEdge (0, 2) ;
	addEdge (1, 3) ;
	addEdge (1, 4) ;
	addEdge (2, 5) ;
	addEdge (4, 6) ;
	addEdge (3, 5) ;//added edge to see how it works
	printf (" DFS Traversal : ");
	DFS (0) ;
	printf ("\n");
	return 0;
}