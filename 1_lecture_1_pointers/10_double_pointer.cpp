#include <iostream>
using namespace std;

void incr1(int **p){
    p = p+1; // apni copy change kiyah ai toh no change in original
}

void incr2(int **p){
    *p = *p+1; // changes will be reflected in main p as addres pe jake change hua hai
}

void incr3(int **p){
    **p = **p+1;// value changes will be reflected as addres pe jake change hua hai
}



int main()
{
    int i = 10;
    int *p = &i;

    int **p2 = &p;
    cout << p2 << endl;
    cout << &p << endl;

    cout << p << endl;
    cout << &i << endl;
    cout << *p2 << endl;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
    return 0;
}