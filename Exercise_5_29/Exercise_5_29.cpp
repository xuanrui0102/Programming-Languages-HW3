#include <iostream>
using namespace std;

int leastCommonMultiple(int a, int b)
{
    int lcm = (a > b) ? a : b;

    while (true)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            return lcm;
        }

        lcm++;
    }
}

int main()
{
    int num1, num2;

    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    if (num1 <= 0 || num2 <= 0)
    {
        cout << "Please enter positive integers." << endl;
        return 1;
    }

    cout << "Least Common Multiple = "
         << leastCommonMultiple(num1, num2) << endl;

    return 0;
}
