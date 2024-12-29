#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
using namespace std;

#define MAX_VERTICES 100
#define INF 999999

template <typename T>
class Graph
{
private:
    int vertices;
    T adjMatrix[MAX_VERTICES][MAX_VERTICES];

public:
    Graph(int v) : vertices(v)
    {
        for (int i = 0; i < vertices; i++)
        {
            for (int j = 0; j < vertices; j++)
            {
                adjMatrix[i][j] = (i == j) ? 0 : INF;
            }
        }
    }

    // Add Edge
    void addEdge(int u, int v, T weight = 1)
    {
        adjMatrix[u][v] = weight;
        adjMatrix[v][u] = weight; // For undirected graph
    }

    // Breadth-First Search (BFS)
    void BFS(int start)
    {
        bool visited[MAX_VERTICES] = {false};
        int queue[MAX_VERTICES], front = 0, rear = 0;

        visited[start] = true;
        queue[rear++] = start;

        cout << "BFS Traversal: ";

        while (front < rear)
        {
            int node = queue[front++];
            cout << node << " ";

            for (int i = 0; i < vertices; i++)
            {
                if (adjMatrix[node][i] != INF && !visited[i])
                {
                    visited[i] = true;
                    queue[rear++] = i;
                }
            }
        }
        cout << endl;
    }

    // Depth-First Search (DFS)
    void DFS(int start)
    {
        bool visited[MAX_VERTICES] = {false};
        int stack[MAX_VERTICES], top = -1;

        stack[++top] = start;

        cout << "DFS Traversal: ";

        while (top >= 0)
        {
            int node = stack[top--];

            if (!visited[node])
            {
                cout << node << " ";
                visited[node] = true;

                for (int i = vertices - 1; i >= 0; i--)
                {
                    if (adjMatrix[node][i] != INF && !visited[i])
                    {
                        stack[++top] = i;
                    }
                }
            }
        }
        cout << endl;
    }

    // Dijkstra's Algorithm
    void dijkstra(int start)
    {
        T dist[MAX_VERTICES];
        bool visited[MAX_VERTICES] = {0};

        for (int i = 0; i < vertices; i++)
            dist[i] = INF;

        dist[start] = 0;

        for (int i = 0; i < vertices - 1; i++)
        {
            T minDist = INF;
            int u = -1;
            for (int j = 0; j < vertices; j++)
            {
                if (!visited[j] && dist[j] < minDist)
                {
                    minDist = dist[j];
                    u = j;
                }
            }

            visited[u] = true;

            for (int v = 0; v < vertices; v++)
            {
                if (!visited[v] && adjMatrix[u][v] != INF && dist[u] + adjMatrix[u][v] < dist[v])
                {
                    dist[v] = dist[u] + adjMatrix[u][v];
                }
            }
        }

        cout << "Dijkstra's Shortest Paths from vertex " << start << ":\n";
        for (int i = 0; i < vertices; i++)
        {
            cout << "Vertex " << i << " Distance: " << dist[i] << endl;
        }
    }
};

#endif
