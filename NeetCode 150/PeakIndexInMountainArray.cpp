#include <iostream>
#include <vector>
using namespace std;

/*
    Author: Rajkishor Thakur
    Topic: Peak Index in a Mountain Array
    Date: 10 Nov 2025
    Approach:
      1. Use binary search to find peak index in mountain array
      2. For each mid point, check if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1]) then return mid
      3. If mid lies in Increasing half (A[mid-1] < A[mid]):
         - Search In Right Half for Peak Index
      4. If mid lies in Decreasing half (A[mid] > A[mid+1]):
         - Search In Left Half for Peak Index
      5. Return -1 if Peak Index not found
    Time Complexity: O(logn)
    Space Complexity: O(1)
*/

class Solution
{
public:
    int peakIndexInMountainArrayBrute(vector<int> &A)
    {
        int n = A.size() - 2;
        for (int i = 1; i <= n; i++)
        {
            if (A[i] > A[i - 1] && A[i] > A[i + 1])
            {
                return i;
            }
        }
        return -1;
    }

    int peakIndexInMountainArray(vector<int> &A)
    {
        int st = 1, end = A.size() - 2;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1])
            {
                return mid;
            }
            else if (A[mid - 1] < A[mid])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> vec = {0, 2, 3, 8, 9, 5, 2};
    Solution solver;
    int index = solver.peakIndexInMountainArrayBrute(vec);
    // int index = solver.peakIndexInMountainArray(vec);
    cout << "Array: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    index != -1 ? (cout << "Peak Element found at index: " << index) : (cout << "Element Not found");
    return 0;
}