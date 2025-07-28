#include <bits/stdc++.h>
using namespace std;

vector<int> kahnTopoSort(unordered_map<int, list<int>> &adj , int n , int m)
{
    vector<int> indegree(n);
    queue<int> q;
    vector<int> ans;
    for (auto i : adj)
    {
        for(auto j: i.second)
        {
            indegree[j]++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }


    while(!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);

        for(auto i: adj[frontNode])
        {
            indegree[i]--;
            if(indegree[i] == 0)
            {
                q.push(i);
            }
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
    vector <vector<int>>edges;

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

    vector<int> ans = kahnTopoSort(adj, n, m);
    for (auto i: ans)
    {
        cout << i << " ";
    }
}