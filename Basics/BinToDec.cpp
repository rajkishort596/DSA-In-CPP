#include <iostream>
using namespace std;

int BinToDec(int n)
{
    int Bin = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 10;
        n /= 10;
        Bin += rem * pow;
        pow *= 2;
    }
    return Bin;
}

int main()
{
    cout << BinToDec(1000011);
    return 0;
}

/*
  (1000011) -> (67)
 */