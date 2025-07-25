#include <bits/stdc++.h>
using namespace std;

void prepareAdj(vector<vector<int>> &edges, unordered_map<int, set<int>> &adj , bool direction)
{
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].insert(v);
        if(direction == 0)
        {
            adj[v].insert(u);
        }
    }
}

void BFS(unordered_map<int,bool> &visited, unordered_map<int, set<int>> &adj, vector<int> &ans , int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    
    while(!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);
        for(auto i: adj[frontNode])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }


}

vector<int> bfsTraversal(int n, vector<vector<int>> &edges)
{
    unordered_map<int, set<int>> adj;
    bool direction = 0;
    prepareAdj(edges, adj, direction);
    unordered_map<int, bool> visited;

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            BFS(visited, adj, ans, i);
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

    vector<int> ans = bfsTraversal(n, edges);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}