#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    
    for(auto i: str){
        str[i] = tolower(str[i]);
    }

    int cntVowel = 0, cntConst = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            cntVowel++;
        }
        else{
            cntConst++;
        }
    }

    cout << "The count of consonants are: " << cntConst << " and count of vowels are: " << cntVowel;
}