#include <iostream>
using namespace std;

int main()
{
    char name[] = "Xuan";

    cout << "Name: " << name << endl;

    cout << "Characters:" << endl;

    for (int i = 0; name[i] != '\0'; i++)
    {
        cout << "name[" << i << "] = "
             << name[i] << endl;
    }

    cout << "Array size = " << sizeof(name) << endl;

    return 0;
}
