#include <iostream>
using namespace std;

bool CheckPrime(int n)
{
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (CheckPrime(n))
    {
        cout << n << " is a Prime Number";
    }
    else
    {
        cout << n << " is not a Prime Number";
    }
    return 0;
}