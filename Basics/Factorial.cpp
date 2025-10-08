#include <iostream>
using namespace std;

int factorial(int n)
{
    int num = 1;
    for (int i = 2; i <= n; i++)
    {
        num *= i;
    }
    return num;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorail of " << n << " is: " << factorial(n);
    return 0;
}