#include <iostream>
using namespace std;
void SwapMinMax(int arr[], int size)
{
    int maxInd = 0;
    int minInd = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[minInd])
        {
            minInd = i;
        }
        if (arr[i] >= arr[maxInd])
        {
            maxInd = i;
        }
    }
    if (minInd == maxInd)
    {
        cout << "Minimum and Maximum elements are the same; no swap performed." << endl;
        return;
    }
    swap(arr[minInd], arr[maxInd]);

    cout << "Swap successful between index " << minInd << " (new Max) and index " << maxInd << " (new Min)." << endl;
}
void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 10, 2, 10, 5, 20};
    int n = sizeof(arr) / sizeof(int);

    cout << "Original array: ";
    PrintArray(arr, n);
    SwapMinMax(arr, n);

    cout << "Array after swap: ";
    PrintArray(arr, n);
    return 0;
}
