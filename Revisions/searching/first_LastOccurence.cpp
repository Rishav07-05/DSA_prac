#include <iostream>
using namespace std;

int firstOccurence(int arr[] , int n ,int target){
    int start = 0;
    int end = n - 1;
    int store = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            store = mid;
            end = mid - 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return store;
}


int lastOccurence(int arr[] , int n ,int target){
    int start = 0;
    int end = n - 1;
    int store = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            store = mid;
            start = mid + 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return store;
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

    int first = firstOccurence(arr, n, target);
    int last = lastOccurence(arr, n, target);

    cout << "First Occurence is " << first << " and last occurence is " << last;

    delete[] arr;
}