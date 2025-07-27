#include <bits/stdc++.h>
using namespace std;

void dfsTopologicalSort(unordered_map<int , list<int>> &adj , unordered_map<int , bool> &visited , int node , stack<int> &st)
{
    visited[node] = 1;

    for(auto i: adj[node])
    {
        if(!visited[i])
        {
            dfsTopologicalSort(adj, visited, i, st);
        }
    }
    st.push(node);
}

vector<int> topologicalSort(unordered_map<int, list<int>> &adj , int n , int m)
{
    stack<int> st;
    unordered_map<int, bool> visited;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            dfsTopologicalSort(adj, visited, i, st);
        }
    }

    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
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

    unordered_map<int, list<int>> adj;

    for (int i = 0; i < m; i++)
    {
        int src = edges[i][0];
        int dest = edges[i][1];

        adj[src].push_back(dest);
    }

    vector<int> ans = topologicalSort(adj, n, m);
    for(auto i: ans)
    {
        cout << i << " ";
    }
}