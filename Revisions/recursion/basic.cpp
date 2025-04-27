// print 1 to N using recursion

// #include <bits/stdc++.h>
// using namespace std;

// void solve(int n){
//     if(n == 0){
//         return ;
//     }

//     solve(n - 1);

//     cout<< n << endl;

// }

// int main(){
//     int n;
//     cin >> n;
//     solve(n);
// }




// print N to 1 using recurison

// #include <bits/stdc++.h>
// using namespace std;

// void solve(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }

//     cout << n << endl;

//     solve(n - 1);

// }

// int main()
// {
//     int n;
//     cin >> n;
//     solve(n);
// }



// #include <bits/stdc++.h>
// using namespace std;

// int solve(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     }
//     return n * solve(n - 1);
// }

// int main(){
//     int n;
//     cin >> n;
//     int ans = solve(n);
//     cout << ans;
// }


#include <bits/stdc++.h>
using namespace std;    

int solve(int n){
    if(n == 0){
        return 0;
    }
    int ans =  n + solve(n - 1);
    return ans;
}

int main(){
    int n;
    cin >> n;
    int ans = solve(n);
    cout<< ans;
}