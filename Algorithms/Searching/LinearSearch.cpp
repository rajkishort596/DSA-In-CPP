#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> arr, int target)
{
    int size = arr.size();
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
    vector<int> arr = {12, 14, 15, 17, 19};
    int tar = 12;
    int index = linearSearch(arr, tar);
    cout << "Linear Search: " << endl;
    index != -1 ? (cout << "Element found at index: " << index) : (cout << "Element Not found");
    return 0;
}