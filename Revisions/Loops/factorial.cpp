#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "The factorial is: " << fact;
}