#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;

    while(n != 0){
        int x = n % 10;
        cnt++;
        n /= 10;
    }

    cout << cnt;
}

