#include <bits/stdc++.h>
using namespace std;

int solve(int n  , vector<int> arr){
    int sum = 0;

    if(n == 0){
        return 0;
    }

    return arr[n - 1] + solve(n - 1, arr);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = solve(n, arr);
    cout << ans;
}