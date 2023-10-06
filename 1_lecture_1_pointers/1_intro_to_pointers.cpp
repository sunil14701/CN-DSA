#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    cout << a << " " << &a << endl;
    int *ptr = &a;
    cout << a << " " << *ptr << endl;
    cout << &a << " " << ptr << endl;
    cout << sizeof(a) << " " << sizeof(ptr) << endl;

    cout << a << " " << *ptr << endl;
    a++;
    cout << a << " " << *ptr << endl;

    // now a and ptr are pointing to same address so if i change ptr value than changes will be seen in a
    (*ptr)++;
    cout << a << " " << *ptr << endl;

    int b = 10;
    int c = b; // b is copied to c
    cout << b << " " << c << endl;
    c++;
    cout << b << " " << c << endl;

    // similarly
    // float f = 34.2;
    // float *ptrf = &f;

    // double d = 34.3434343;
    // double *ptrd = &d;
    // cout << sizeof(f) << " " << sizeof(ptrf) << endl; // pointer size is same
    // cout << sizeof(d) << " " << sizeof(ptrd) << endl;

    int i;
    cout << i << endl;
    i++;
    cout << i << endl;
    int *p = NULL;
    cout << p << endl;
    cout << *p << endl;// dangerous as access mem which i dont know
    cout << &p << endl;

    return 0;
}