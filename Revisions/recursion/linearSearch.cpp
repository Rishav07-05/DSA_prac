#include <bits/stdc++.h>
using namespace std;

bool checkTarget(vector<int> arr, int n , int tar){
    
    if(n == 0){
        return false;
    }

    if(arr[n - 1] == tar){
        return true;
    }

    return checkTarget(arr , n - 1, tar);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int tar;
    cin >> tar;
    if (checkTarget(arr, n, tar)){
        cout << "Element is present";
    }
    else{
        cout << "Element is not present";
    }
}