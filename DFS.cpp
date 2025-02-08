#include <iostream>
#include <vector>
using namespace std;

void DFSUtil(const vector<vector<int>>& graph, int node, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) DFSUtil(graph, neighbor, visited);
    }
}

void DFS(const vector<vector<int>>& graph, int start) {
    vector<bool> visited(graph.size(), false);
    DFSUtil(graph, start, visited);
}

int main() {
    vector<vector<int>> graph = {
        {1, 2}, {0, 3, 4}, {0, 4}, {1, 5}, {1, 2, 5}, {3, 4}
    };
    cout << "DFS starting from node 0: ";
    DFS(graph, 0);
    return 0;
}
