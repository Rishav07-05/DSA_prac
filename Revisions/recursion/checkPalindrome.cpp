#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str , int s , int e){
    if(s >= e){
        return true;
    }

    if(str[s] != str[e]){
        return false;
    }

    return checkPalindrome(str, s + 1, e - 1);
}

int main(){
    string str;
    cin >> str;
    int s = 0, e = str.length() - 1;

    if (checkPalindrome(str, s, e)){
        cout << "This is palindrome";
    }
    else{
        cout << "This is not palindrome";
    }
}