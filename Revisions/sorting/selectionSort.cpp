// selection sort compares the minimum element 

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }


    for (int i = 0; i < n - 1; i++){
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }


    for (int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }


}