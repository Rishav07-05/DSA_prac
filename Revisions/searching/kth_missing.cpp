#include <bits/stdc++.h>
using namespace std;


int kthSmallest(int arr[] , int n , int k){
    int s = 0, e = n - 1;
    while(s <= e){
        int mid = s + (e - s) / 2;
        int missing = arr[mid] - (mid + 1);

        if(missing < k){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return k + e + 1;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++){
        cin >>arr[i];
    }
    int k;
    cin >> k;

    cout << "The " << k << "th missing number is: " << kthSmallest(arr,n, k) << endl;
}