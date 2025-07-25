#include <bits/stdc++.h>
using namespace std;

class graph{

public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u , int v, bool direction)
    {
        // direction = 0 -> undirected
        // direction = 1 -> directed

        // create an edge from u to v

        adj[u].push_back(v);
        if(direction == 0)
        {
            adj[v].push_back(u);
        }
    }


    void printAdjList()
    {
        for(auto i: adj)
        {
            cout << i.first << "->";
            for(auto j: i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }


};



// array approach to create a graph 

vector<vector<int>> graphCreation(int n , int m , vector<vector<int>> &edges , bool direction)
{
    vector<vector<int>> ans(n);

    for(int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        ans[u].push_back(v);
        if(direction == 0)
        {
            ans[v].push_back(u);
        }
    }

    vector<vector<int>> adj(n);

    for (int i = 0; i < n; i++)
    {
        adj[i].push_back(i);

        for (int j = 0; j < ans[i].size(); j++)
        {
            adj[i].push_back(ans[i][j]);
        }
    }
    return adj;
}

int main()
{
    int n;
    cout << "Enter the number of nodes" << endl;
    cin >> n;

    int m;
    cout << "Enter the number of edges" << endl;
    cin >> m;



    // Map approach


    // graph g;

    // for (int i = 0; i < m; i++)
    // {
        //     int u, v;
    //     cin >> u >> v;
    //     g.addEdge(u, v , 0);
    // }

    // g.printAdjList();
    


    // 2D Array approach

    vector<vector<int>> edges;

    cout << "Enter " << m << " edges (u v):" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    vector<vector<int>> adj = graphCreation(n, m, edges, 0);



    // printing loginc

    for (int i = 0; i < adj.size(); i++)
    {
        cout << i << " = ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[0][j];
            if (j != adj[i].size() - 1)
                cout << " -> ";
        }
        cout << endl;
    }
    
}