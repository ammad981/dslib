// graph.h - Header file for Graph Algorithms
#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <climits>
using namespace std;

template <typename T>
class Graph
{
private:
    int vertices;
    vector<vector<int>> adjList;

public:
    Graph(int v) : vertices(v)
    {
        adjList.resize(v);
    }

    // Add Edge
    void addEdge(int u, int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // For undirected graph
    }

    // Breadth-First Search (BFS)
    void BFS(int start)
    {
        vector<bool> visited(vertices, false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        cout << "BFS Traversal: ";

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int neighbor : adjList[node])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }

    // Depth-First Search (DFS)
    void DFS(int start)
    {
        vector<bool> visited(vertices, false);
        stack<int> s;

        s.push(start);

        cout << "DFS Traversal: ";

        while (!s.empty())
        {
            int node = s.top();
            s.pop();

            if (!visited[node])
            {
                cout << node << " ";
                visited[node] = true;

                for (auto it = adjList[node].rbegin(); it != adjList[node].rend(); ++it)
                {
                    if (!visited[*it])
                    {
                        s.push(*it);
                    }
                }
            }
        }
        cout << endl;
    }

    // Dijkstra's Algorithm
    void dijkstra(int start)
    {
        vector<int> dist(vertices, INT_MAX);
        vector<bool> visited(vertices, false);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        pq.push({0, start});
        dist[start] = 0;

        while (!pq.empty())
        {
            int u = pq.top().second;
            pq.pop();

            if (visited[u])
                continue;
            visited[u] = true;

            for (int v : adjList[u])
            {
                int weight = 1; // Assuming weight = 1 for simplicity
                if (dist[u] + weight < dist[v])
                {
                    dist[v] = dist[u] + weight;
                    pq.push({dist[v], v});
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
