#include <bits/stdc++.h>
using namespace std;



int firstOccurence(int arr[] , int n , int k){
    int s = 0;
    int e = n - 1 , store = -1;
    while(s <= e){
        int mid = s + (e - s) / 2;
        if(arr[mid] == k){
            store = mid;
            e = mid - 1;
        }
        else if(k > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return store;
}
int lastOccurence(int arr[] , int n , int k){
    int s = 0;
    int e = n - 1 , store = -1;
    while(s <= e){
        int mid = s + (e - s) / 2;
        if(arr[mid] == k){
            store = mid;
            s = mid + 1;
        }
        else if(k > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return store;
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int tar;
    cin >> tar;

    int totalCnt = lastOccurence(arr, n, tar) - firstOccurence(arr, n, tar) + 1;

    cout << totalCnt;
}