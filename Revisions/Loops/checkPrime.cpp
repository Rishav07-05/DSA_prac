#include <iostream>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    

    for (int i = 2; i <= n; i++)
    {
        if(n%i == 0){
            cnt++;
        }
    }

    if(cnt < 2){
        cout << "Is Prime";
    }
    else{
        cout << "Isn't Prime";
    }
}