#include <iostream>
using namespace std;

int main()
{
    int rows;
    int num = 1;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        cout << "-";
    }

    return 0;
}