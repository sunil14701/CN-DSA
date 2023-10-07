#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3};
    char c[] = "abc";
    cout << a << endl;
    cout << c << endl;

    int *aptr = a;
    char *cptr = c;
    cout << aptr << endl;
    cout << cptr << endl;
    cout << cptr + 1 << endl;

    char c1 = 'v';
    char *pc = &c1;
    cout << c1 << endl;
    cout << pc << endl;
    return 0;
}