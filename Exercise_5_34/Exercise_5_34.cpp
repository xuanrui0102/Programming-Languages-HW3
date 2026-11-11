#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    if (exponent == 1)
    {
        return base;
    }

    return base * power(base, exponent - 1);
}

int main()
{
    int base, exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent (>= 1): ";
    cin >> exponent;

    if (exponent < 1)
    {
        cout << "Exponent must be at least 1." << endl;
        return 1;
    }

    cout << "Result = " << power(base, exponent) << endl;

    return 0;
}
