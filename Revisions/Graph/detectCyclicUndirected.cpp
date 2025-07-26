#include <bits/stdc++.h>
using namespace std;




bool detectCycleBfs(unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj , int node)
{
    unordered_map<int, int> parent;
    parent[node] = -1;
    visited[node] = true;
    queue<int> q;
    q.push(node);
    vector<int> ans;

    while(!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);

        for(auto i: adj[frontNode])
        {
            if(visited[i] && i != parent[frontNode])
            {
                return true;
            }
            else if(!visited[i])
            {
                q.push(i);
                visited[i] = true;
                parent[i] = frontNode;
            }
        }
    }
    return false;
}

bool detectCycleDfs(unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, int node , int parent)
{
    
    visited[node] = true;

    for(auto i: adj[node])
    {
        if(!visited[i])
        {
            bool ans = detectCycleDfs(visited, adj, i , node);
            if(ans == 1)
            {
                return true;
            }
        }
        else if(i != parent)
        {
            return true;
        }
    }
    return false;
}

bool isCyclic(vector<vector<int>> &edges, int n, int m)
{
    unordered_map<int , list<int>> adj;

    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int, bool> visited;

    for (int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            // bool ans = detectCycleBfs(visited, adj, i);
            bool ansDfs = detectCycleDfs(visited, adj, i , -1);

            // if(ans)
            // {
            //     return true;
            // }
            if(ansDfs)
            {
                return true;
            }
        }
    }
    return false;
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

    bool ans = isCyclic(edges, n, m);

    if(ans)
    {
        cout << "It is a cyclic graph";
    }
    else
    {
        cout << "It is a non-cyclic graph";
    }
}