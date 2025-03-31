#include <iostream>
using namespace std;

int binarySearch(int arr[] , int n , int target){
    int start = 0;
    int end = n - 1;

    while(start <= end)
    {
    int mid = start + (end - start) / 2;
        if(arr[mid] == target ){
            return mid;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;

    int ans = binarySearch(arr, n, target);

    if(ans == -1){
        cout << "Target is not found";
    }
    else{
        cout << "Target found";
    }
}