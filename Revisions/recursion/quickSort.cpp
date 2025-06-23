#include <bits/stdc++.h>
using namespace std;


int partion(vector<int> &arr , int s , int e){

    int pivot = arr[s];

    int cnt = 0;

    for (int i = s + 1; i <= e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    int pivotIdx = s + cnt;

    swap(arr[pivotIdx], arr[s]);

    int i = s, j = e;
    while(i < pivotIdx && j > pivotIdx){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] >= pivot){
            j--;
        }
        if (i < pivotIdx && j > pivotIdx){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIdx;
}

void quickSort(vector<int> &arr , int s , int e){

    // base case 

    if(s >= e){
        return;
    }

    int p = partion(arr, s, e);

    quickSort(arr,s,p - 1);
    quickSort(arr, p + 1, e);
    
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}