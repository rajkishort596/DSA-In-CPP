#include <iostream>
#include <vector>
using namespace std;

/*
    Author: Rajkishor Thakur
    Topic: Single Number
    Date: 11 Oct 2025
    Approach:
      1. Use Bitwise XOR ^ Operator
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int val : nums)
        {
            ans ^= val;
        }
        return ans;
    }
};

int main()
{
    vector<int> vec = {4, 1, 2, 1, 2};
    Solution solver;
    int unique = solver.singleNumber(vec);
    cout << "Array: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "The single unique number is: " << unique << endl;
    return 0;
}