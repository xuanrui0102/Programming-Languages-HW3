#include <iostream>
using namespace std;

int main()
{
    int scores[5] = {85, 92, 76, 98, 88};

    int highest = scores[0];
    int lowest = scores[0];

    for (int i = 1; i < 5; i++)
    {
        if (scores[i] > highest)
        {
            highest = scores[i];
        }

        if (scores[i] < lowest)
        {
            lowest = scores[i];
        }
    }

    cout << "Highest score = " << highest << endl;
    cout << "Lowest score = " << lowest << endl;

    return 0;
}
