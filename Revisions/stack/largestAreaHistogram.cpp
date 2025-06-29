#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int> ans(n);
    st.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while(st.top() >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

vector<int> prevSmaller(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int> ans(n);
    st.push(-1);
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while(st.top() >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

int largestArea(vector<int> &arr , int n)
{
    int area = INT_MIN;

    vector<int> next;
    vector<int> prev;

    next = nextSmaller(arr, n);
    prev = prevSmaller(arr, n);

    for (int i = 0; i < arr.size(); i++)
    {
        int l = arr[i];
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newArea = l * b;
        area = max(area, newArea);
    }

    return area;
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
    int ans = largestArea(arr, n);
    cout << "The largest area histogram is: " << ans;
}