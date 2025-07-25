#include <bits/stdc++.h>
using namespace std;

void dfs(unordered_map<int, bool> &visited , unordered_map<int, list<int>> &adj , vector<int> &component , int node)
{
    component.push_back(node);
    visited[node] = true;

    for(auto i: adj[node])
    {
        if(!visited[i])
        {
            dfs(visited, adj, component, i);
        }
    }
}

vector<vector<int>> dfsTraversal(int n , vector<vector<int>> &edges)
{
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int, bool> visited;
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            vector<int> component;
            dfs(visited, adj, component, i);
            ans.push_back(component);
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> edges;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    vector<vector<int>> ans = dfsTraversal(n ,edges);

    for(auto i: ans)
    {
        for(auto j: i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}