#include <iostream>
using namespace std;

class Solution
{
private:
    int sqrtx(int x)
    {
        if (x == 0 || x == 1)
            return x;

        int s = 0, e = x / 2, ans = -1;

        while (s <= e)
        {
            long long int mid = s + (e - s) / 2;
            if (mid * mid == x)
                return mid;
            else if (mid * mid < x)
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return ans;
    }

public:
    int mySqrt(int x)
    {
        return sqrtx(x);
    }
};

int main()
{
    Solution sol;
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Square root of " << x << " is: " << sol.mySqrt(x) << endl;
    return 0;
}
