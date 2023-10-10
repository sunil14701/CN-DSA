#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int i = 10;
    int *p = new int;
    *p = 2;
    cout << i << endl;
    cout << *p << endl;

    int *pa = new int[50];

    //  find max element
    cout << " Enter number of elements: ";
    int n;
    cin >> n;
    int *pa2 = new int[n]; // created dynamic array
    for (int i = 0; i < n; i++)
    {
        cin >> pa2[i];
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (pa2[i] > max)
            max = pa2[i];
    }
    cout << max << endl;

    // memory usage static vs dynamic
    while(true){
        // int i = 1000;
        new int;
    }

    return 0;
}