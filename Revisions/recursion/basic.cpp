// print 1 to N using recursion 


#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n == 0){
        return ;
    }

    solve(n - 1);

    cout<< n << endl;

}

int main(){
    int n;
    cin >> n;
    solve(n);
}



