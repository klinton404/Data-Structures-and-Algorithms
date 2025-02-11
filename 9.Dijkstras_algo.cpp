#include <iostream>
#include <climits>
using namespace std;

#define V 9

int findMinDistance(int dist[], bool visited[])
{
    int min = INT_MAX, minIndex;

    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && dist[i] <= min)

        {
            min = dist[i], minIndex = i;
        }
    }

    return minIndex;
}

// Prints the shortest distances from the source to each vertex
void printDistances(int dist[])
{
    cout << "Vertex\tDistance from Source\n";
    for (int i = 0; i < V; i++)
        cout << i << "\t" << dist[i] << "\n";
}

// Dijkstra's algorithm for shortest path
void dijkstra(int graph[V][V], int src)
{
    int dist[V];
    bool visited[V] = {false};

    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {
        int u = findMinDistance(dist, visited);
        visited[u] = true;

        for (int v = 0; v < V; v++)
        {
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printDistances(dist);
}

int main()
{
    int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                       {4, 0, 8, 0, 0, 0, 0, 11, 0},
                       {0, 8, 0, 7, 0, 4, 0, 0, 2},
                       {0, 0, 7, 0, 9, 14, 0, 0, 0},
                       {0, 0, 0, 9, 0, 10, 0, 0, 0},
                       {0, 0, 4, 14, 10, 0, 2, 0, 0},
                       {0, 0, 0, 0, 0, 2, 0, 1, 6},
                       {8, 11, 0, 0, 0, 0, 1, 0, 7},
                       {0, 0, 2, 0, 0, 0, 6, 7, 0}};

    dijkstra(graph, 0);
    return 0;
}
