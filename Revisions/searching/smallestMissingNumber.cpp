#include <bits/stdc++.h>
using namespace std;

int smallestMissing(int arr[] , int n)
{
    int start = 0, end = n - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == mid){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return start;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "The smallest missing number is: " << smallestMissing(arr, n);
}



