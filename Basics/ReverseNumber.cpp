#include <iostream>
using namespace std;

int ReverseNumber(int num)
{
    int lastdigit;
    int revNum = 0;

    while (num > 0)
    {
        int lastdigit = num % 10;
        revNum = (revNum * 10) + lastdigit;
        num = num / 10;
    }

    return revNum;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed Num : " << ReverseNumber(num) << endl;
    return 0;
}