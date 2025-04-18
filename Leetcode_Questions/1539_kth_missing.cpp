#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {

        // ------------------ Brute Force Approach (O(n)) ------------------

        /*
        vector<int> dummy;
        for (int i = 1; i <= arr[arr.size() - 1] + k; i++) {
            dummy.push_back(i);
        }

        int cnt = 0, store = 0, j = 0;

        for (int i = 0; i < dummy.size(); i++) {
            if (j < arr.size() && dummy[i] == arr[j]) {
                j++;
            } else {
                cnt++;
                if (cnt == k) {
                    store = dummy[i];
                    break;
                }
            }
        }
        return store;
        */

        // ------------------ Binary Search Approach (O(log n)) ------------------

        int s = 0, e = arr.size() - 1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            int missing = arr[mid] - (mid + 1);

            if (missing < k)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }

        return s + k;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> arr1 = {2, 3, 4, 7, 11};
    int k1 = 5;
    cout << "Test case 1 Output: " << sol.findKthPositive(arr1, k1) << endl;
    // Expected Output: 9

    // Test case 2
    vector<int> arr2 = {1, 2, 3, 4};
    int k2 = 2;
    cout << "Test case 2 Output: " << sol.findKthPositive(arr2, k2) << endl;
    // Expected Output: 6

    // You can add more test cases below
    return 0;
}
