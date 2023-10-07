
#include <iostream>
using namespace std;
int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}
void increment(int **p)
{
    (**p)++;
}

int main()
{
   int a = 100;
int *p = &a;
int **q = &p;
int b = (**q)++ + 4;
cout << a << " " << b << endl;





}
