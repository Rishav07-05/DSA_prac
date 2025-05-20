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

    if(row == 1){
        for (int j = 0; j < col; j++){
            cout << arr[0][j] << " ";
        }
    }
    else if(col == 1){
        for (int i = 0; i < row; i++){
            cout << arr[i][0] << " ";
        }
    }
    else{

        // top row 

        for (int j = 0; j < col; j++){
            cout<< arr[0][j] << " ";
        }

        // right coloumn

        for (int i = 1; i < row - 1; i++){
            cout << arr[i][col - 1] << " ";
        }

        // bottom row

        for (int j = col - 1; j >= 0; j--){
            cout << arr[row - 1][j] << " ";
        }

        // left coloumn

        for (int i = row - 2; i >= 1; i--){
            cout << arr[i][0] << " ";
        }
    }
    
}