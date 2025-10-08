#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main()
{
    cout << GCD(4, 6);
    return 0;
}