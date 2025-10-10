#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {12, 14, 15, 17, 19};
    int n = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = n - 1;

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    reverseArray(arr, start, end);
    cout << endl;

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}