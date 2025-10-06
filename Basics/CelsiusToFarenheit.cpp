#include <iostream>
using namespace std;

float celciusToFarenheit(float celcius)
{
    return (float)(9.0 / 5 * celcius) + 32;
}

int main()
{
    float celcius;
    float fahrenheit;
    cout << "Enter the Temperature in degree Celcius: ";
    cin >> celcius;
    cout << "Temperature in Farenheit: " << celciusToFarenheit(celcius);
    return 0;
}