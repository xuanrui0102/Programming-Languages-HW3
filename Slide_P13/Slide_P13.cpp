#include <iostream>
using namespace std;

// Function to print a 2D array
void printArray(const int a[][4], int rows)
{
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cout << a[row][column] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printArray(a, 3);

    return 0;
}
