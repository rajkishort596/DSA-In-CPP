#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    Author: Rajkishor Thakur
    Topic: Container With Most Water
    Date: 18 Oct 2025
    Approach:
      1. Use Two Pointer Approach
      2. Move Pointer with less height
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxWater = 0;
        int lp = 0, rp = height.size() - 1;
        while (lp < rp)
        {
            int w = rp - lp;
            int h = min(height[lp], height[rp]);
            int currWater = w * h;
            maxWater = max(currWater, maxWater);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }

public:
    int maxAreaBruteForce(vector<int> &height)
    {
        int maxWater = 0;
        int n = height.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int w = j - i;
                int h = min(height[i], height[j]);
                int currWater = w * h;
                maxWater = max(currWater, maxWater);
            }
        }
        return maxWater;
    }
};

int main()
{
    vector<int> vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution solver;
    int maxWater = solver.maxAreaBruteForce(vec);
    // int maxWater = solver.maxArea(vec);

    cout << "Array: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "Maximum Water: " << maxWater << endl;
    return 0;
}