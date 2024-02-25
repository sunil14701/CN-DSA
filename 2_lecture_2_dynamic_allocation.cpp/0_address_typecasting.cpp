#include <iostream>
using namespace std;

int main()
{
    int i = 65;
    char c = i;
    cout << c << endl;

    // what will happen
    int *p = &i;
    // char *pc = p;// error
    char *pc = (char *)p;
    float *pf = (float *)p;
    cout << p << " " << pc << " " << pf << endl;
    cout << *p << " " << *pc << " " << *pf << endl;

    // we are assuming        // expecting value   // real value at that address
    cout << *pc << endl;       // 0  (null char)                      A
    cout << *(pc + 1) << endl; // 0                        0
    cout << *(pc + 2) << endl; // 0                        0
    cout << *(pc + 3) << endl; // A                        0

    // explicit type conversion into int from char
    char c2 = 'A';
    char *pcc = &c2;
    cout << c2 << " " << &c2 << " " << pcc << endl;

    int *pii = (int *)pcc;
    cout << pii << " " << *pii << endl;

    char c3[5] = "abcd";
    char *p3c = c3;
    int *p3i = (int *)p3c;
    cout << *p3i << endl;// a -> 61(hexaddecimal)etc - >so dcba -> 0x64636261 -> in decimal 1684234849

    int a = 65;
    int *pa = &a;
    char *pca = (char*) pa;
    cout << a <<" " <<  pa << " " << pca << endl; //pca -> will give a not aaaca as of little endian system a ke baad null char aajaga 
    return 0;
}