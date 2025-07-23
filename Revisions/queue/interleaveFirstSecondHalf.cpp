#include <bits/stdc++.h>
using namespace std;

queue<int> interleave(queue<int> &q)
{
    queue<int> firstHalf;
    queue<int> res;
    int n = q.size();

    for (int i = 0; i < n / 2; i++)
    {
        firstHalf.push(q.front());
        q.pop();
    }

    while(!firstHalf.empty() && !q.empty())
    {
        
        res.push(firstHalf.front());
        firstHalf.pop();

        res.push(q.front());
        q.pop();

    }

    if (!q.empty())
    {
        res.push(q.front());
        q.pop();
    }
    
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
    }

    queue<int> ans = interleave(q);

    while (!ans.empty())
    {
        cout << ans.front() << " ";
        ans.pop();
    }
}