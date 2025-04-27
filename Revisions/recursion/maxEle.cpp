#include <bits/stdc++.h>
using namespace std;

int getMax(int n , vector<int> arr){
    if(n == 1){
        return arr[0];
    }

    int maxi = getMax(n - 1, arr);

    return max(arr[n - 1], maxi);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = getMax(n, arr);
    cout << ans;
}