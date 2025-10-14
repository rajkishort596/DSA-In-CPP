#include <iostream>
#include <vector>
using namespace std;

/*
    Author: Rajkishor Thakur
    Topic: Two sum
    Date: 14 Oct 2025
    Approach:
      1. Two Pointer Approach
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        int i = 0, j = nums.size() - 1;
        while (i < j)
        {
            int ps = nums[i] + nums[j];
            if (ps > target)
            {
                j--;
            }
            else if (ps < target)
            {
                i++;
            }
            else
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
        return ans;
    }

public:
    vector<int> twoSumBruteForce(vector<int> &nums, int target)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 17;
    Solution solver;
    vector<int> ans = solver.twoSum(vec, target);
    // vector<int> ans = solver.twoSumBruteForce(vec, target);

    cout << "Array: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "Indices Add up to target " << target << ": " << "(" << ans[0] << ", " << ans[1] << ")" << endl;
    return 0;
}