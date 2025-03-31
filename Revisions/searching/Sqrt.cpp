#include <bits/stdc++.h>
using namespace std;

int sqrtx(int n) {
    int s = 0;
    int e = n/2 ;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if(mid * mid == n){
            return mid;
        }
        else if(mid * mid < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = sqrtx(n);
    cout << "The sqrt of " << n << " is: " << ans;
}