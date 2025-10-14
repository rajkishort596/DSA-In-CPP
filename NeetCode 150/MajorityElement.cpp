#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    Author: Rajkishor Thakur
    Topic: Majority Element
    Date: 14 Oct 2025
    Approach:
      1. Moore's Voting Algorithm
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int freq, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (freq == 0)
            {
                ans = nums[i];
            }
            if (ans == nums[i])
            {
                freq++;
            }
            else
            {
                freq--;
            }
        }
        return ans;
    }

public:
    int majorityElementBruteForce(vector<int> &nums)
    {
        int n = nums.size();
        for (int val : nums)
        {
            int freq = 0;
            for (int el : nums)
            {
                if (el == val)
                    freq++;
            }
            if (freq > n / 2)
            {
                return val;
            }
        }
        return -1;
    }

public:
    int majorityElementBySorting(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int freq = 1;
        int ans = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                freq++;
            }
            else
            {
                freq = 1;
                ans = nums[i];
            }
            if (freq > n / 2)
            {
                return ans;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> vec = {2, 2, 1, 1, 1, 2, 2};
    Solution solver;
    // int majority = solver.majorityElementBruteForce(vec);
    // int majority = solver.majorityElementBySorting(vec);
    int majority = solver.majorityElement(vec);

    cout << "Array: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "Majority Element: " << majority << endl;
    return 0;
}