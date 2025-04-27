#include <bits/stdc++.h>
using namespace std;

void reverseArr(int n, vector<int> arr)
{
    if (n == 0)
    {
        return;
    }

    cout << arr[n - 1] << " ";

    reverseArr(n - 1, arr);
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
    reverseArr(n, arr);
}