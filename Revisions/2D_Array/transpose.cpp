#include <bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin >> row >> col;
    vector<vector<int>> arr(row, vector<int>(col));

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col;  j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++){
        for (int j = i + 1; j < col; j++){
            swap(arr[j][i], arr[i][j]);
        }
    }

    cout << endl;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<  arr[i][j] << " ";
        }
        cout << endl;
    }
}