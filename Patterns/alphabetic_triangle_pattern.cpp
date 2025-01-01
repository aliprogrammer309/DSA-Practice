#include <iostream>
using namespace std;

int main()
{
    int rows;
    char character = 'A';

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << character << " ";
        }
        character++;
        cout << endl;
    }

    return 0;
}