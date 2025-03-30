#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++){
    int cnt = 0;
        for (int j = 2; j <= n; j++){
            if(i % j == 0){
                cnt++;
            }
        }
        if(cnt < 2){
            cout << i << " " << endl;
        }
        continue;
    }
}