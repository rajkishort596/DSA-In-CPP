#include <iostream>
#include <vector>
using namespace std;

/*
    Author: Rajkishor Thakur
    Topic: Best Time To But And Sell Stock
    Date: 17 Oct 2025
    Approach:
      1. Assuming Each Day as Selling Day (Expect First Day)
      2. Keep Track of maxProfit and bestBuy
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0, bestBuy = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > bestBuy)
            {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};

int main()
{
    // vector<int> vec = {7, 1, 5, 3, 6, 4};
    vector<int> vec = {7, 6, 4, 3, 1};
    Solution solver;
    int maxProfit = solver.maxProfit(vec);
    cout << "Price Array: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "Maximum Profit: " << maxProfit << endl;
    return 0;
}