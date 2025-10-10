#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 14, 15, 17, 19};
    int n = sizeof(arr) / sizeof(int);
    int sum = 0, product = 1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum of Elements: " << sum << endl;
    cout << "Product of Elements: " << product << endl;

    return 0;
}