#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> arr(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int cnt = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] == 0){
                cnt++;
            }
        }
    }
    cout << cnt;
}