#include <bits/stdc++.h>
using namespace std;


// using dfs 

bool detectCycleDfs(unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsVisited, unordered_map<int, list<int>> &adj , int node)
{
    visited[node] = true;
    dfsVisited[node] = true;

    for(auto i: adj[node])
    {
        if(!visited[i])
        {
            bool ans = detectCycleDfs(visited, dfsVisited, adj, i);
            if(ans)
            {
                return true;
            }
        }
        else if(dfsVisited[i])
        {
            return true;
        }
    }

    dfsVisited[node] = false;
    return false;
}

bool isCyclic(unordered_map<int, list<int>> &adj, int n, int m)
{

    unordered_map<int, bool> visited , dfsVisited;
    for (int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            bool ans = detectCycleDfs(visited, dfsVisited, adj , i);
            if(ans)
            {
                return true;
            }
        }
    }
    return false;
}



// using bfs - (Kahn's algo)
    bool bfsDetectCycle(unordered_map<int, list<int>> &adj, int n, int m)
{
    vector<int> indegree(n);
    queue<int> q;
    int cnt = 0;

    for (auto i : adj)
    {
        for (auto j : i.second)
        {
            indegree[j]++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        cnt++;

        for (auto i : adj[frontNode])
        {
            indegree[i]--;
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
    }
    return cnt != n;
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

    unordered_map<int, list<int>> adj;

    for (int i = 0; i < m; i++)
    {
        int src = edges[i][0];
        int dest = edges[i][1];

        adj[src].push_back(dest);
    }


    // bool ans = isCyclic(adj , n , m);

    // if(ans)
    // {
    //     cout << "Cycle detected";
    // }
    // else
    // {
    //     cout << "Cycle not present";
    // }




    if (bfsDetectCycle(adj, n, m))
    {
        cout << "Cycle present";
    }
    else
    {
        cout << "Cycle not present";
    }
}