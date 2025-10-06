#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 14, 10, 2, 10};
    int max = -1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Max Number is: " << max;
    return 0;
}