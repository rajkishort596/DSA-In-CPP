#include <iostream>
using namespace std;

int main()

{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        char c = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }

    return 0;
}

/*
    A B C D
    A B C D
    A B C D
    A B C D
*/