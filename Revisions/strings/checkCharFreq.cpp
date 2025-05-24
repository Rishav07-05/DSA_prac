#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    unordered_map<char, int> mpp;
    for(auto i: str){
        mpp[i]++;
    }

    for(auto i: mpp){
        cout << i.first << ": " << i.second << "\n";
    }
}