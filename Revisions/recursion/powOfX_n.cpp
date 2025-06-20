#include <bits/stdc++.h>
using namespace std;

int getPow(int x ,int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return x;
    }

    int ans = getPow(x, n / 2);

    if(n % 2 == 0){
       return ans *ans;
    }
    else{
        return x * ans * ans;
    }
}

int main(){
    int x, n;
    cin >> x >> n;
    int ans = getPow(x, n);
    cout << ans << " ";
}