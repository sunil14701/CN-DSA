#include <iostream>
using namespace std;

int main()
{
    int a[10];
    cout << a << endl;
    cout << &a[0] << endl;
    cout << a << " " << &a << endl;
    cout << sizeof(a) << " " << sizeof(a[0]) << endl;

    a[0] = 5;
    a[1] = 4;
    cout << *a << endl;
    cout << *(a + 1) << endl;
    cout << a[0] << " " << 0 [a] << endl;
    return 0;
}