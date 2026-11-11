#include <iostream>
using namespace std;

void staticArrayInit()
{
    static int array[3];

    cout << "Static array: ";
    for (int i = 0; i < 3; i++)
    {
        cout << array[i] << " ";
        array[i] += 5;
    }
    cout << endl;
}

void automaticArrayInit()
{
    int array[3] = {1, 2, 3};

    cout << "Automatic array: ";
    for (int i = 0; i < 3; i++)
    {
        cout << array[i] << " ";
        array[i] += 5;
    }
    cout << endl;
}

int main()
{
    cout << "First call:" << endl;
    staticArrayInit();
    automaticArrayInit();

    cout << "\nSecond call:" << endl;
    staticArrayInit();
    automaticArrayInit();

    return 0;
}
