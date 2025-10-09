#include <iostream>
using namespace std;

int IsPowOf2(int n)
{
    if (n % 2 != 0)
    {
        return false;
    }
    while (n >= 2)
    {
        if (n % 2 != 0)
        {
            return false;
            break;
        }
        n /= 2;
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    (IsPowOf2(n)) ? cout << n << " is power of 2" : cout << n << " is not power of 2";
    return 0;
}