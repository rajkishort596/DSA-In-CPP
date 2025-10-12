#include <iostream>
#include <vector>
using namespace std;

/*
    Author: Rajkishor Thakur
    Topic: Maximum Subarray
    Date: 12 Oct 2025
    Approach:
      1. Use Kadan's Algorithm
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int curSum = 0, maxSum = INT_MIN;
        for (int st = 0; st < nums.size(); st++)
        {
            curSum += nums[st];
            maxSum = max(curSum, maxSum);
            if (curSum < 0)
                curSum = 0;
        }
        return maxSum;
    }

public:
    int maxSubArrayBruteForce(vector<int> &nums)
    {
        int maxSum = INT_MIN;
        for (int st = 0; st < nums.size(); st++)
        {
            int curSum = 0;
            for (int end = st; end < nums.size(); end++)
            {
                curSum += nums[end];
                maxSum = max(curSum, maxSum);
            }
        }
        return maxSum;
    }
};

int main()
{
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution solver;
    int maxSum = solver.maxSubArray(vec);
    // int maxSum = solver.maxSubArrayBruteForce(vec);

    cout << "Array: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "The Max Subarray Sum is: " << maxSum << endl;
    return 0;
}