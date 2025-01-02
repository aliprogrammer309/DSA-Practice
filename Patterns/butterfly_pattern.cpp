#include <iostream>
using namespace std;

int main()
{
    int rows;
    int num = 1;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // upper part
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (rows - i); j++)
        {
            cout << "-";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}