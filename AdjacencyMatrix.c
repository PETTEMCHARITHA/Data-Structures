#include<stdio.h>
#define Max_Vertices 100

int numVertices;
int adjMatrix[Max_Vertices][Max_Vertices];
int intMatrix() {
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            adjMatrix[i][j] = 0;
        }
    }
}

void edge(int u, int v) {
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;
}

int main() {
    printf("Enter no of Vertices: ");
    scanf("%d", &numVertices);
    intMatrix();

    printf("Enter edges (u,v): ");
    for (int i = 0; i < numVertices; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        edge(u, v);
    }

    // Print the adjacency matrix
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

