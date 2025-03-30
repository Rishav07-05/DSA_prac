#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = n - i; j >= 1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}



// pattern ==> input taking as 5

// 5 4 3 2 1  
// 4 3 2 1  
// 3 2 1  
// 2 1  
// 1  