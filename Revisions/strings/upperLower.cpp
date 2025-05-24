// uppercase to lowercase 

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     cin >> str;
//     for (int i = 0; i < str.length(); i++){
//         if(str[i] >= 65 && str[i] <= 90){
//             str[i] = str[i] + 32;
//         }
//         else{
//             continue;
//         }
//     }
//     cout << str;
// }


// lowercase to uppercase

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 97 && str[i] <= 123)
        {
            str[i] = str[i] - 32;
        }
        else
        {
            continue;
        }
    }
    cout << str;
}