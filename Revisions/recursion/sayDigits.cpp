#include <bits/stdc++.h>
using namespace std;

void sayDigit(string arr[] , int n){
    if(n == 0)
        return;

    int digit = n % 10;
    n /= 10;

    sayDigit(arr, n);

    cout << arr[digit] << " ";


}

int main(){
    int n;
    cin >> n;
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    sayDigit(arr, n);
}