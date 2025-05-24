#include <bits/stdc++.h>
using namespace std;
int main(){

    string str;

    getline(cin, str);

    string res = "";

    for (int i = 0; i < str.length();i++){

        if (isalnum(str[i])){
            res += tolower(str[i]);
        }

    }

    string temp = res;

    reverse(res.begin(), res.end());

    if(temp == res){
        cout << "Is a valid palindrome";
    }
    else{
        cout << "Is not a valid palindrome";
    }

}