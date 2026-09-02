#include <iostream>
#include <queue>
using namespace std;

class Graph
{
    int adj[20][20];
    int n;

public:

    void createGraph()
    {
        cout << "Enter number of vertices: ";
        cin >> n;

        // Initialize adjacency matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                adj[i][j] = 0;
            }
        }

        int edges;
        cout << "Enter number of edges: ";
        cin >> edges;

        cout << "Enter edges (source destination):" << endl;

        for (int i = 0; i < edges; i++)
        {
            int u, v;
            cin >> u >> v;

            adj[u][v] = 1;
            adj[v][u] = 1;   // Undirected graph
        }
    }

    void displayMatrix()
    {
        cout << "\nAdjacency Matrix:\n";

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }

    // DFS
    void DFS(int start, bool visited[])
    {
        visited[start] = true;

        cout << start << " ";

        for (int i = 0; i < n; i++)
        {
            if (adj[start][i] == 1 && visited[i] == false)
            {
                DFS(i, visited);
            }
        }
    }

    // BFS
    void BFS(int start)
    {
        bool visited[20] = {false};
        queue<int> q;

        visited[start] = true;
        q.push(start);

        cout << "BFS Traversal: ";

        while (!q.empty())
        {
            int current = q.front();
            q.pop();

            cout << current << " ";

            for (int i = 0; i < n; i++)
            {
                if (adj[current][i] == 1 && visited[i] == false)
                {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }

        cout << endl;
    }
};

int main()
{
    Graph g;
    int choice, start;

    do
    {
        cout << "\n===== Graph Menu =====";
        cout << "\n1. Create a Graph";
        cout << "\n2. Display Graph (Adjacency Matrix)";
        cout << "\n3. DFS Traversal";
        cout << "\n4. BFS Traversal";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                g.createGraph();
                break;

            case 2:
                g.displayMatrix();
                break;

            case 3:
            {
                cout << "\nEnter starting vertex: ";
                cin >> start;

                bool visited[20] = {false};

                cout << "DFS Traversal: ";
                g.DFS(start, visited);
                cout << endl;

                break;
            }

            case 4:
                cout << "\nEnter starting vertex: ";
                cin >> start;

                g.BFS(start);
                break;

            case 5:
                cout << "Program Exited.";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while (choice != 5);

    return 0;
}