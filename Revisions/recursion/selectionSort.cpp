#include <bits/stdc++.h>
using namespace std;

void checkSorted(vector<int> &arr,int start,int n)
{
    if (start >= n - 1)
        return;

    int minIdx = start;

    for (int i = start + 1; i < n; i++)
    {
        if (arr[minIdx] > arr[i])
        {
            minIdx = i;
        }
    }
    swap(arr[start], arr[minIdx]);

    checkSorted(arr,start + 1, n);
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
    checkSorted(arr,0,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}