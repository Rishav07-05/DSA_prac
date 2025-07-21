#include <bits/stdc++.h>
using namespace std;

vector<int> firstNegInt(vector<int> &arr , int k)
{
    
    vector<int> ans;
    deque<int> dq;

    for (int i = 0; i < k; i++)
    {
        if(arr[i] < 0)
        {
            dq.push_back(i);
        }
    }

    if(dq.size() > 0)
    {
        ans.push_back(arr[dq.front()]);
    }
    else
    {
        ans.push_back(0);
    }

    for (int i = k; i < arr.size(); i++)
    {
        if(!dq.empty() && i - dq.front() >= k)
        {
            dq.pop_front();
        }

        if(arr[i] < 0)
        {
            dq.push_back(i);
        }

            if (dq.size() > 0)
            {
                ans.push_back(arr[dq.front()]);
            }
            else
            {
                ans.push_back(0);
            }
    }
    return ans;
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

    vector<int> res = firstNegInt(arr, k);
    for(auto i : res)
    {
        cout << i << " ";
    }
    
}