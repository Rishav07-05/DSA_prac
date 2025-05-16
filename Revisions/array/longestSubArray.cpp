#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;


    // brute force 

    // int len = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += arr[j];
    //         if(sum == k){
    //             len = max(len, j - i + 1);
    //         }
    //     }
    // }
    // cout << len;



    // hashing approach

    // unordered_map<int, int> prefixmap;
    // int sum = 0, maxLen = 0;
    // for (int i = 0; i < n; i++){

    //     sum += arr[i];

    //     if(sum == k){
    //         maxLen = i + 1;
    //     }

    //     if(prefixmap.find(sum - k) != prefixmap.end()){
    //         int prevIdx = prefixmap[sum - k];
    //         maxLen = max(maxLen, i - prevIdx);
    //     }

    //     if(prefixmap.find(sum) == prefixmap.end()){
    //         prefixmap[sum] = i;
    //     }
    // }
    // cout << maxLen << " ";



    // two pointer approach  (sliding window)

    int i = 0, j = 0;
    int sum = 0;
    int len = 0;

    while(j < arr.size()){

        sum += arr[j];

        while(sum > k && i <= j){
            sum -= arr[i];
            i++;
        }

        if(sum == k){
            len = max(len, j - i + 1);
        }
        j++;
    }
    cout<<  len;
}

