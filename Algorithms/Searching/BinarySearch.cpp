#include <iostream>
#include <vector>
using namespace std;

/*
    Author: Rajkishor Thakur
    Topic: Binary Search
    Date: 24 Oct 2025
    Approach:
      1. Find mid and check mid == target
      2. Divide serach space every time
    Time Complexity: O(logn)
    Space Complexity: O(1)
*/

int BinarySearch(vector<int> arr, int tar)
{
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == tar)
        {
            return mid;
        }
        else if (arr[mid] < tar)
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

int RecursiveBinarySearch(const vector<int> &vec, int tar, int st, int end)
{

    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (vec[mid] == tar)
        {
            return mid;
        }
        else if (vec[mid] < tar)
        {
            return RecursiveBinarySearch(vec, tar, mid + 1, end);
        }
        else
        {
            return RecursiveBinarySearch(vec, tar, st, mid - 1);
        }
    }

    return -1;
}

int main()
{
    vector<int> vec = {-1, 0, 3, 4, 5, 9, 12};
    int tar = 12;
    int st = 0;
    int end = vec.size() - 1;

    cout << BinarySearch(vec, tar);
    cout << RecursiveBinarySearch(vec, tar, st, end);

    return 0;
}