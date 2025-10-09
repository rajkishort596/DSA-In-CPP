#include <iostream>
using namespace std;

int DecToBin(int n)
{
    int Dec = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        n /= 2;
        Dec += rem * pow;
        pow *= 10;
    }
    return Dec;
}

int main()
{
    cout << DecToBin(67);
    return 0;
}

/*
 (67) -> (1000011)
 */