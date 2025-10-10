#include <iostream>
using namespace std;

void PrintUniqueElements(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {12, 14, 15, 12, 15, 19, 21, 19};
    int n = sizeof(arr) / sizeof(int);
    PrintUniqueElements(arr, n);
    return 0;
}