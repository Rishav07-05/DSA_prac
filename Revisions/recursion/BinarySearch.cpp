#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> arr, int s ,int e, int tar){
    
    
    if(s > e){
        return false;
    }

    int mid = s + (e - s) / 2;

    if(arr[mid] == tar){
        return true;
    }

    if(arr[mid] < tar){
        return binarySearch(arr, mid + 1, e, tar);
    }
    else {
        return binarySearch(arr,s , mid - 1 , tar);
    }
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

    int s = 0;
    int e = n - 1;
    

    if (binarySearch(arr, s , e, tar)){
        cout << "Element present";
    }
    else{
        cout << "Element is not present";
    }
}