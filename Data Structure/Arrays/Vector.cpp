#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Size Before: " << vec.size() << endl;
    cout << "Front: " << vec.front() << " " << "Back: " << vec.back() << endl;
    // vec.push_back(6);
    // vec.push_back(7);
    vec.pop_back();
    vec.pop_back();
    cout << "Size After: " << vec.size() << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    return 0;
}