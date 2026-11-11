#include <iostream>
using namespace std;

int addByOne(int x)
{
    x++;

    cout << "Inside function: x = " << x << endl;

    return x;
}

int main()
{
    int x = 100;

    cout << "Before function: x = " << x << endl;

    int y = addByOne(x);

    cout << "After function: x = " << x << endl;
    cout << "Returned value: y = " << y << endl;

    return 0;
}
