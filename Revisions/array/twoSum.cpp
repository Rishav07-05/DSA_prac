#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int tar;
    cin >> tar;

    pair<int, int> ans = {-1 , -1};

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == tar){
                ans = {i, j};
                break;
            }
        }
    }

    if(ans.first != -1){
        cout << ans.first << " " << ans.second;
    }
    else{
        cout << "not found";
    }
}