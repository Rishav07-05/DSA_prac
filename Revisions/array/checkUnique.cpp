#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // approach 1 => using xor

    // int ans = 0;

    // for (int i = 0; i < n; i++){
    //     ans ^= arr[i];
    // }
    // cout << ans;


    // approach 2 => using map

    map<int, int> mpp;
    for(auto i: arr){
        mpp[i]++;
    }

    for(auto i: mpp){
        if(i.second == 1){
            cout << i.first << " ";
        }
    }
}