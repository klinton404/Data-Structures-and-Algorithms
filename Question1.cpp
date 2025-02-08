#include <iostream>
using namespace std;

void warshallPathMatrix(int graph[][4], int V) {
    int path[V][V];
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            path[i][j] = graph[i][j];

    for (int k = 0; k < V; k++)
        for (int i = 0; i < V; i++)
            for (int j = 0; j < V; j++)
                path[i][j] = path[i][j] || (path[i][k] && path[k][j]);

    cout << "Path Matrix:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++)
            cout << path[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int graph[4][4] = {
        {0, 1, 0, 1},
        {0, 0, 1, 0},
        {1, 0, 0, 0},
        {0, 0, 1, 0}
    };
    warshallPathMatrix(graph, 4);
    return 0;
}
