#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;

    temp = n;
    int cnt = 0, sum = 0;

    while (temp > 0)
    {
        cnt++;
        temp /= 10;
    }

    temp = n; 
    while (temp > 0)
    {
        int x = temp % 10;
        sum += pow(x, cnt);
        temp /= 10;
    }

    if (sum == n)
    {
        cout << "Is Armstrong";
    }
    else
    {
        cout << "Isn't Armstrong";
    }

    return 0;
}
