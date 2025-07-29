#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath(unordered_map<int, list<int>> &adj  , int n , int m , int src , int dest)
{
    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;
    queue<int> q;
    vector<int> ans;

    q.push(src);
    visited[src] = true;
    parent[src] = -1;

    while(!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        for(auto i: adj[frontNode])
        {
            if(!visited[i])
            {
                visited[i] = true;
                parent[i] = frontNode;
                q.push(i);
            }
        }
    }

    int currNode = dest;
    ans.push_back(currNode);


    while (currNode != src)
    {
        currNode = parent[currNode];
        ans.push_back(currNode);    
    }

    reverse(ans.begin(), ans.end());
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

    int src, dest;
    cin >> src >> dest;

    unordered_map<int, list<int>> adj;
    for (int i = 0; i < m; i++)
    {
        int src = edges[i][0];
        int dest = edges[i][1];

        adj[src].push_back(dest);
        adj[dest].push_back(src);
    }

    vector<int> ans = shortestPath(adj, n, m, src, dest);
    for(auto i: ans)
    {
        cout << i << " ";
    }
}