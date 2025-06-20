#include <bits/stdc++.h>
using namespace std;

void reverseStr(int i , int j ,string &str){
    if(i > j){
        return;
    }

    swap(str[i], str[j]);

    reverseStr(i+1, j-1, str);
}

int main(){
    string str;
    cin >> str;
    int i = 0, j = str.length() - 1;
    reverseStr( i,j,str);
    cout << str;
}