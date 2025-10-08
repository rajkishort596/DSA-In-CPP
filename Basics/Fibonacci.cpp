#include <iostream>
using namespace std;

void PrintFibonacciSeries(int n)
{
    if (n < 1)
        return;
    int firstTerm = 0;
    int secondTerm = 1;

    cout << firstTerm << " ";
    if (n > 1)
    {
        cout << secondTerm << " ";
    }

    for (int i = 2; i <= n; i++)
    {
        int nextTerm = firstTerm + secondTerm;
        cout << nextTerm << " ";
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
}
int main()
{
    int n;
    cout << "Enter Number of Terms: ";
    cin >> n;
    PrintFibonacciSeries(n);
    return 0;
}