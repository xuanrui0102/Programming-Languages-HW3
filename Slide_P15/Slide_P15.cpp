#include <iostream>
using namespace std;

int sumArray(const int a[][4], int rows)
{
    int total = 0;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            total += a[row][col];
        }
    }

    return total;
}

int main()
{
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int result = sumArray(a, 3);

    cout << "Total = " << result << endl;

    return 0;
}
