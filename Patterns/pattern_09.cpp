#include <iostream>
using namespace std;

int main()
{
    int n = 9;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
    1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1
    6 5 4 3 2 1
    7 6 5 4 3 2 1
    8 7 6 5 4 3 2 1
    9 8 7 6 5 4 3 2 1
*/