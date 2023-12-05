#include <iostream>
using namespace std;

int main()
{
    int a[10];
    cout << a << " " << &a[0] << endl; // both have same address
    cout << a << " " << &a << endl;
    cout << sizeof(a) << " " << sizeof(a[0]) << endl;

    a[0] = 5;
    a[1] = 4;
    cout << *a << endl;
    cout << *(a + 1) << endl;
    cout << a[0] << " " << 0 [a] << endl;

    int *p = &a[0];
    cout << p << " " << a << endl;
    cout << &p << " " << &a << endl; // both will be diff as pointer ko new memory mile hai uss me kise aur ka address strore hota hai
    cout << sizeof(p) << " " << sizeof(a) << endl; // both will be diff bsc of symbol table
    p = p+1; // correct
    a = a+1; // incorrect
    return 0;
}