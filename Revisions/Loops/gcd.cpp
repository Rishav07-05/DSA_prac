#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    while(b != 0){
        int x = b % 10;
        b = a % b;
        a = x;
    }

    cout << "The gcd of these two numbers are: " << a;
}