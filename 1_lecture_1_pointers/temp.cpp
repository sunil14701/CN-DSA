#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    cout << i << " " << &i << endl;
    int *p = &i;
    cout << p << endl;

    i++;
    (*p)++;
    cout << i << endl;
    int *ptr = NULL;
    cout << *ptr << endl;
    // *(ptr)++;
    // cout << *ptr << endl;
    return 0;
}