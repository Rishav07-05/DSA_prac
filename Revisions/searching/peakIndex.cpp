#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // brute force
    // int max_ele = max_element(arr.begin(), arr.end()) - arr.begin();
    // cout << max_ele;


    // binary search logic

    int s = 0;
    int e = n - 1;

    while(s < e){
        int mid = s + (e - s) / 2;
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    cout << s;
}