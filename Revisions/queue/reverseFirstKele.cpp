#include <bits/stdc++.h>
using namespace std;

queue<int> reverseFirstK(queue<int> &q , int k)
{
    stack<int> st;

    for (int i = 0; i < k; i++)
    {
        int val = q.front();
        q.pop();
        st.push(val);
    }

    while(!st.empty())
    {
        int val = st.top();
        st.pop();
        q.push(val);
    }

    int t = q.size() - k;

    while(t--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }

    return q;
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
    int k;
    cin >> k;

    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
    }

    queue<int> ans = reverseFirstK(q, k);

    while (!ans.empty())
    {
        cout << ans.front() << " ";
        ans.pop();
    }
}   