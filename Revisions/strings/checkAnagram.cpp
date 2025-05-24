#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    if(str1.length() != str2.length()){
        cout << "They are not anagrams";
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 == str2){
        cout << "They are anagrams";
    }
    else{
        cout << "They aren't anagrams";
    }
}