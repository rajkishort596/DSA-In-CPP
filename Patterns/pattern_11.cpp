#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // for number
        for (int j = 0; j < n - i; j++)
        {
            cout << i + 1;
        }

        cout << endl;
    }
    return 0;
}
/*
1111
 222
  33
   4
*/