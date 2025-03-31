#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    bool flag = true;
    int store = 0;

    for (int i = 0; i < n; i++){
        if(arr[i] == target){
            flag = true;
            store = i;
        }
        else{
            flag = false;
        }
    }

    if(flag){
        cout << "Target found at index " << store;
    }
    else{
        cout << "Target not matched";
    }
}