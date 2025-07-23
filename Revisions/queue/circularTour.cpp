#include <bits/stdc++.h>
using namespace std;

int circularTour(vector<int> &gas , vector<int> &cost , int &n)
{
    int deficit = 0;
    int balance = 0;
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        balance += gas[i] - cost[i];

        if(balance < 0)
        {
            deficit += balance;
            start = i + 1;
            balance = 0;
        }
    }

    if(deficit + balance >= 0)
    {
        return start;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> gas(n);
    vector<int> cost(n);

    for (int i = 0; i < n; i++)
    {
        cin >> gas[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }

    int ans = circularTour(gas, cost , n);
    cout << ans << " ";
}