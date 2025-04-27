#include <bits/stdc++.h>
using namespace std;

int cntNum(int n){
    int cnt = 0;
    if (n == 0)
    {
        return 0;
    }

    // int digit = n % 10;
    // cnt++;

    return 1 + cntNum(n / 10);
}

int main(){
    int n;
    cin >> n;
    int ans = cntNum(n);
    cout << ans;
}