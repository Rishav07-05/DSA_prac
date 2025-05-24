#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int cnt = 0;
    getline(cin, str);



    // for (int i = 0; i < str.length(); i++){
    //     if(str[i] == ' '){
    //         cnt++;
    //     }
    // }
    // cout << cnt + 1;

    bool isWord = false;

    for (int i = 0; i < str.length(); i++){
        if (str[i] != ' ' && isWord == false){
            cnt++;
            isWord = true;
        }
        else if(str[i] == ' '){
            isWord = false;
        }
    }
    cout << cnt;
    
}