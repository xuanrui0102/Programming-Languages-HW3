#include <iostream>
using namespace std;

void hanoi(int n, char source, char destination, char auxiliary)
{
    if (n == 1)
    {
        cout << "Move disk 1 from "
             << source << " to " << destination << endl;
        return;
    }

    hanoi(n - 1, source, auxiliary, destination);

    cout << "Move disk " << n << " from "
         << source << " to " << destination << endl;

    hanoi(n - 1, auxiliary, destination, source);
}

int main()
{
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    if (n < 1)
    {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    hanoi(n, 'A', 'C', 'B');

    return 0;
}
