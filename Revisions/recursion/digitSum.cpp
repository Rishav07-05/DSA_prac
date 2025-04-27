#include <bits/stdc++.h>
using namespace std;

int digitSum(int n){


    if(n == 0){
        return 0;
    }

    int digit = n % 10;

    n /= 10;

    return digit + digitSum(n);
}

int main()
{
    int n;
    cin >> n;
    int ans = digitSum(n);
    cout << ans;
}