#include <bits/stdc++.h>
using namespace std;

int solve(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    if(n < 0)
    {
        return 1 / solve(x, -n);
    }

    // recursive call for even and odd making the power as half

    int half = solve(x, n / 2);
    if (n % 2 == 0)
    {
        return half * half;
    }
    else
    {
        return half * half * x;
    }
}

int main()
{
    int x;
    cin >> x;
    int n;
    cin >> n;

    // following the recursive approach
    int ans = solve(x, n);
    cout << ans;
}