#include <iostream>
using namespace std;

char changeCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + ('a' - 'A');
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        return ch - ('a' - 'A');
    }

    return ch;
}

int main()
{
    char letter;

    cout << "Enter an alphabet: ";
    cin >> letter;

    cout << "Changed case: " << changeCase(letter) << endl;

    return 0;
}
