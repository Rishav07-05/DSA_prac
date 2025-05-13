// pattern 1 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// pattern 2

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < i + 1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


// pattern 3

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++){
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }


// pattern 4

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}