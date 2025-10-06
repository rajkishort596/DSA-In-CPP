#include <iostream>
using namespace std;

int findRemainder(int a, int b)
{
    int c = a / b;
    return a - c * b;
}

int main()
{
    int a, b;
    cout << "Enter Dividend: ";
    cin >> a;
    cout << "Enter Divisor: ";
    cin >> b;
    cout << "Rmainder: " << findRemainder(a, b);
    return 0;
}