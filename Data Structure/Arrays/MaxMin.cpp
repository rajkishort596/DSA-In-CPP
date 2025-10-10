#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 14, 15, 17, 19};
    int max = INT_MIN;
    int min = INT_MAX;
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Max Element: " << max << endl;
    cout << "Min Element: " << min;
    return 0;
}