#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> arr , int n){
    if (n == 0 || n == 1){
        return true;
    }

    if(arr[0] < arr[1]){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(isSorted(arr , n)){
        cout << "Sorted";
    }
    else{
        cout << " Not sorted";
    }
}