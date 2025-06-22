#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int e){

    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    vector<int> first(len1);
    vector<int> second(len2);

    // copying part 


    for (int i = 0; i < len1; i++){
        first[i] = arr[s + i];
    }

    for (int i = 0; i < len2; i++){
        second[i] = arr[mid + i + 1];
    }


    // merging part 

    int i = 0, j = 0, mainIdx = s;


    while(i < len1 && j < len2){
        if(first[i] < second[j]){
            arr[mainIdx++] = first[i++];
        }
        else{
            arr[mainIdx++] = second[j++];
        }
    }


    while(i < len1){
        arr[mainIdx++] = first[i++];
    }


    while(j < len2){
        arr[mainIdx++] = second[j++];
    }


}

void mergeSort(vector<int> &arr , int s , int e){

    //base case 

    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // left side sorting
    mergeSort(arr, s, mid);

    // right side sorting
    mergeSort(arr, mid + 1, e);

    // merging both the side
    merge(arr, s, e);
}


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}