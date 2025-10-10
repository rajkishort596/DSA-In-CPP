#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 14, 15, 17, 19};
    int n = sizeof(arr) / sizeof(int);

    cout << "Linear Traversal: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Reverse Traversal: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}