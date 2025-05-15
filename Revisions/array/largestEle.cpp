#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // TC => o(nlogn)
    // sort(arr.begin(), arr.end());  

    // cout << "The largest element is: " << arr[n - 1];
    
    // int maxi = 0;
    // for (int i = 0; i < n; i++){
    //     maxi = max(maxi, arr[i]);
    // }
    
    // cout << "The largest element is: " << maxi;
}