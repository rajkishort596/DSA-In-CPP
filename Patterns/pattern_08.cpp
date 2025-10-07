#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    1 2 3 4 5 6
*/