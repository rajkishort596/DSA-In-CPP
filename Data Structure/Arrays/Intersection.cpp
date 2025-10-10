#include <iostream>
using namespace std;

void PrintIntersectionElement(int arr[], int arr2[], int n, int m)
{
    cout << "Intersection of Array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i] == arr2[j])
            {
                cout << arr[i] << " ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {6, 7, 3, 1};
    int arr2[] = {1, 2, 3, 3, 2, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);
    PrintIntersectionElement(arr, arr2, n, m);
    return 0;
}