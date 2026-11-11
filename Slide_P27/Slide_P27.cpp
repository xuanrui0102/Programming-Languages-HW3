#include <iostream>
using namespace std;

void addByOne(int &x)
{
    x++;

    cout << "Inside function: x = " << x << endl;
}

int main()
{
    int x = 100;

    cout << "Before function: x = " << x << endl;

    addByOne(x);

    cout << "After function: x = " << x << endl;

    return 0;
}
