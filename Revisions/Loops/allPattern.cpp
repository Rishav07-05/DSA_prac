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

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
// }


// pattern 5 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++){
//         for (int j = n ; j >= i + 1; j--){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// pattern 6

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = n; i >= 1; i--){
//         for (int j = 1; j <= i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }



// pattern 7

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++){
//         // space

//         for (int j = 0; j < n - i - 1; j++){
//             cout << " ";
//         }
        
//         // star
        
//         for (int j = 0; j < i * 2 + 1; j++)
//         {
//             cout << "*";
//         }

        
//         // space 

//         for (int j = 0; j < n - i - 1; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }



// pattern 8


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = n - 1; i >= 0; i--){
//         for (int j = 0; j < n - i - 1; j++){
//             cout << " ";
//         }
//         for (int j = 0; j < i * 2 + 1; j++){
//             cout << "*";
//         }
//         for (int j = 0; j < n - i - 1; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }


// pattern 9

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     for (int i = 1; i <= 2*n-1; i++)
//     {
//         int star = i;
//         if(i > n)
//             star = 2 * n - i;
//         for (int j = 1; j <= star; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// pattern 10


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int start = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if(i % 2 == 0){
//             start = 1;
//         }
//         for (int j = 0; j <= i; j++){
//             cout << start << " ";
//             start = 1 - start;
//         }
//         cout << endl;
//     }
// }


// pattern 11

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int space = 2 * (n - 1);
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= i; j++){
//             cout << j;
//         }

//         for (int j = 1; j <= space; j++){
//             cout << " ";
//         }

//         for (int j = i; j >= 1; j--){
//             cout << j;
//         }
//         cout << endl;
//         space -= 2;
//     }
// }


// pattern 12

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}