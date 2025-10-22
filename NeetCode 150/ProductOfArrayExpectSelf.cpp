#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    Author: Rajkishor Thakur
    Topic: Container With Most Water
    Date: 18 Oct 2025
    Approach:
      1. Calculate prifix and suffix product for an index i
      2. multiply prefix and suffix and store it in vector
      3. return vector
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution
{
public:
    vector<int> productExceptSelfBruteForce(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    ans[i] *= nums[j];
                }
            }
        }
        return ans;
    }

    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 1);
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);

        // prefix
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }
        // suffix
        for (int j = n - 2; j >= 0; j--)
        {
            suffix[j] = suffix[j + 1] * nums[j + 1];
        }

        for (int i = 0; i < n; i++)
        {
            ans[i] = prefix[i] * suffix[i];
        }

        return ans;
    }
    vector<int> productExceptSelfWithOptimalSpace(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 1);

        // prefix =>ans
        for (int i = 1; i < n; i++)
        {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        int suffix = 1;
        for (int j = n - 2; j >= 0; j--)
        {
            suffix *= nums[j + 1];
            ans[j] *= suffix;
        }
        return ans;
    }
};

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    Solution solver;
    // vector<int> product = solver.productExceptSelfBruteForce(vec);
    // vector<int> product = solver.productExceptSelf(vec);
    vector<int> product = solver.productExceptSelfWithOptimalSpace(vec);

    cout << "Original Array: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "Product Except Self Array: ";
    for (int val : product)
    {
        cout << val << " ";
    }
    return 0;
}