#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> arr , int index){
    if (index == arr.size() - 1){
        return true;
    }

    if(arr[index] > arr[index + 1]){
        return false;
    }

        return isSorted(arr , index + 1);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(isSorted(arr , 0)){
        cout << "Sorted";
    }
    else{
        cout << " Not sorted";
    }
}