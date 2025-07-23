#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int n , int k)
{
    deque<int> maxi;
    deque<int> mini;

    // addition of all k element to maxi and mini 

    for (int i = 0; i < k; i++)
    {
        while(!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }

        while(!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
    }

    int ans = 0;
    for (int i = k; i < n; i++)
    {

        // making the sum 

        ans += arr[maxi.front()] + arr[mini.front()];


        // removal

        while(i - maxi.front() >= k)
        {
            maxi.pop_front();
        }

        while(i - mini.front() >= k)
        {
            mini.pop_front();
        }


        // addition


        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }

        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
    }
    
    // this step is to calculate the last windoww

    ans += arr[maxi.front()] + arr[mini.front()];

    cout<<"The sum is: " << ans;
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

    solve(arr, n, k);
}