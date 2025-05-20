#include <bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin >> row >> col;
    vector<vector<int>> arr(row, vector<int>(col));

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    int tar;
    cin >> tar;

    bool flag = false;

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(arr[i][j] == tar){
                flag = true;
                break;
            }
            // else{
            //     flag = false;
            // }
        }
    }

    if(flag){
        cout << "The element is present";
    }
    else{
        cout << "The elemet is not present";
    }

}