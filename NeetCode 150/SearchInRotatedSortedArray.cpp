#include <iostream>
#include <vector>
using namespace std;

/*
    Author: Rajkishor Thakur
    Topic: Search in a rotated sorted array
    Date: 26 Oct 2025
    Approach:
      1. Use binary search to find target in rotated array
      2. For each mid point, check if target is present
      3. If left half is sorted (A[st] <= A[mid]):
         - Check if target lies in left half range
         - If yes, search left half, else search right half
      4. If right half is sorted:
         - Check if target lies in right half range
         - If yes, search right half, else search left half
      5. Return -1 if target not found
    Time Complexity: O(logn)
    Space Complexity: O(1)
*/

class Solution
{
public:
    int search(vector<int> &A, int tar)
    {
        int st = 0, end = A.size() - 1;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (A[mid] == tar)
            {
                return mid;
            }
            if (A[st] <= A[mid])
            {
                if (A[st] <= tar && tar <= A[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
            else
            {
                if (A[mid] <= tar && tar <= A[end])
                {
                    st = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> vec = {4, 5, 6, 7, 0, 1, 2};
    int tar = 0;
    Solution solver;
    int index = solver.search(vec, tar);
    cout << "Array: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    index != -1 ? (cout << "Element found at index: " << index) : (cout << "Element Not found");
    return 0;
}