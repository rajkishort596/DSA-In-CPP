#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {12, 14, 15, 17, 19};
    int n = sizeof(arr) / sizeof(int);
    int index = linearSearch(arr, n, 21);
    cout << "Linear Search: " << endl;
    index != -1 ? (cout << "Element found at index: " << index) : (cout << "Element Not found");
    return 0;
}