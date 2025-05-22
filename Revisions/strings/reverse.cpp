#include <iostream>
using namespace std;
int main(){
    string str;
    cin >> str;
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversed += str[i];
    }
    cout << reversed;
}