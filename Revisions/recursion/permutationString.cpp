#include <bits/stdc++.h>
using namespace std;

void solve(string &str , int idx , vector<string> &res){

    // base case 

    if (idx >= str.length()){
        res.push_back(str);
        return;
    }

    for (int j = idx; j < str.length(); j++){
        
        swap(str[idx] , str[j]);

        // recursive call 
        solve(str, idx + 1, res);

        // backtrack 
        swap(str[idx] , str[j]);
    }
}

vector<string> generatePermutation(string &str){
    vector<string> res;
    int idx = 0;
    solve(str, idx, res);
    return res;
}

int main(){
    string str;
    cin >> str;
    vector<string> ans = generatePermutation(str);
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}