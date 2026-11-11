#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    cout << "Fibonacci(" << n << ") = "
         << fibonacci(n) << endl;

    return 0;
}
