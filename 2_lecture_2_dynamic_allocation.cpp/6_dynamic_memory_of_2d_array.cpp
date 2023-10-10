#include <iostream>
using namespace std;

int main()
{

    // creating 2d array 10,20 dimentions dynamicaaly
    int **p = new int *[10];

    // in heap 10 rows and 20 cols
    for (int i = 0; i < 10; i++)
    {
        p[i] = new int[20];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cin >> p[i][j];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}