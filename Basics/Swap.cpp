#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int a = 5;
    int b = 10;
    cout << "Before Swapping" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    swap(a, b);
    cout << "After Swapping" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    return 0;
}