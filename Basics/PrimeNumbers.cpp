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

void PrintPrimeNumbers(int n)
{
    cout << "Prime Numbers between 2 to " << n << " are:" << endl;
    for (int i = 2; i <= n; i++)
    {
        if (CheckPrime(i))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cout << "Enter Number of Terms: ";
    cin >> n;
    PrintPrimeNumbers(n);
    return 0;
}