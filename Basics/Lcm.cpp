#include <iostream>
using namespace std;

int LCM(int a, int b)
{
    int max = (a > b) ? a : b;
    while (true)
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
            break;
        }
        max++;
    }
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    cin >> a;
    cin >> b;
    cout << "the LCM of " << a << " and " << b << " is " << LCM(a, b);
    return 0;
}