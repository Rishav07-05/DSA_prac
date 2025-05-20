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

    
    bool flag = true;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i == j && arr[i][j] == 1){
                flag = true;
            }
            else{
                flag = false;
            }
        }
    }


    if(flag){
        cout << "Is a identity matrix";
    }
    else{
        cout << "Not a identity matrix";
    }
}