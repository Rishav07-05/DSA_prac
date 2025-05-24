#include <bits/stdc++.h>
using namespace std;
int main(){
    string str , res = " ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++){
        if(str[i] != ' '){
            res += str[i];
        }
    }
    cout << res;
}