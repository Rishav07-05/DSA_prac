#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;

    // method 1 

    // string temp = str;

    // reverse(str.begin(), str.end());

    // if(temp == str){
    //     cout << "Is a palindrome string";
    // }
    // else{
    //     cout << "Is not a palindrome string";
    // }


    // method 2

    int s = 0, e = str.length() - 1;
    bool checkPalindrome = true;

    while(s < e){
        if(str[s] != str[e]){
            checkPalindrome = false;
            break;
        }
        s++;
        e--;
    }

    if(checkPalindrome){
        cout << "Is a palindrome string";
    }
    else{
        cout << "Is not a palindrome string";
    }

}