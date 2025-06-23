#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr , vector<vector<int>> &ans , vector<int> output , int idx ){

    if(idx >= arr.size()){
        ans.push_back(output);
        return;
    }

    // exclude

    solve(arr, ans, output, idx+1);

    // include

    output.push_back(arr[idx]);
    solve(arr, ans, output, idx + 1);

}

vector<vector<int>> substet(vector<int>&arr){
    vector<vector<int>> ans;
    vector<int> output;
    int idx = 0;
    solve( arr , ans, output, idx);
    return ans; 
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<vector<int>> res = substet(arr);

    for (int i = 0; i < res.size(); i++){
        for (int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}