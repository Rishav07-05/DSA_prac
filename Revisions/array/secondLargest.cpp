#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxi = INT_MIN;
    int secMax = INT_MIN;

    for (auto i: arr){
        maxi = max(maxi, i);
    }

    for (int i = 0; i < n; i++){
        if(arr[i] != maxi && arr[i] > secMax){
            secMax = arr[i];
        }
    }
    cout << "The second largest element is: " << secMax;
}