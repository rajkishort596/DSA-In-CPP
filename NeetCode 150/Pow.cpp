#include <iostream>
#include <vector>
using namespace std;

/*
    Author: Rajkishor Thakur
    Topic: Pow(x,n)
    Date: 17 Oct 2025
    Approach:
      1. Use Binary Exponentiation
    Time Complexity: O(logn)
    Space Complexity: O(1)
*/

class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == 0)
            return 1.0;
        if (x == 0)
            return 0.0;
        if (x == 1)
            return 1.0;
        if (x == -1 && n % 2 == 0)
            return 1.0;
        if (x == -1 && n % 2 != 0)
            return -1.0;

        long binForm = n;
        double ans = 1;

        if (n < 0)
        {
            x = 1 / x;
            binForm = -binForm;
        }

        while (binForm > 0)
        {
            if (binForm % 2 == 1)
            {
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }
        return ans;
    }
};

int main()
{
    double x = 2.1;
    int n = 3;
    Solution solver;
    double ans = solver.myPow(x, n);
    cout << x << " raise to power " << n << " is: " << ans;
    return 0;
}