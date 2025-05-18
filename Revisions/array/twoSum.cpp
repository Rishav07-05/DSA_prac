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


    // brute force 

    // pair<int, int> ans = {-1 , -1};

    // for (int i = 0; i < n; i++){
    //     for (int j = i + 1; j < n; j++){
    //         if(arr[i] + arr[j] == tar){
    //             ans = {i, j};
    //             break;
    //         }
    //     }
    // }

    // if(ans.first != -1){
    //     cout << ans.first << " " << ans.second;
    // }
    // else{
    //     cout << "not found";
    // }



    // hashmap approach

    unordered_map<int, int> prefixMap;

    pair<int, int> ans = {-1 , -1};

    for (int i = 0; i < n; i++)
    {
        int totalNum = tar - arr[i];
        if(prefixMap.find(totalNum) != prefixMap.end()){
            ans = {prefixMap[totalNum], i};
        }
        prefixMap[arr[i]] = i;
    }
    cout << ans.first << " " << ans.second;
}