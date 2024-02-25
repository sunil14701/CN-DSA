#include <iostream>
using namespace std;

void incremet_value(int *a)
{
    *a = *a + 1; // pointer ki value ko update karo
}

void increment_pointer(int *p)
{
    p = p + 1; // pointer ko 4 byte se aage badio
}

int summ(int a[], int size)
{ // int a[] == int *a , array is passed as pointer
    cout << "inside summ: " << sizeof(a) << endl;
    int ans = 0;
    for(int i=0;i<size;i++){
        ans+=a[i];
    }
    return ans;
}

int main()
{
    int i = 10;
    int *ptr = &i;

    cout << ptr << endl;
    increment_pointer(ptr); // pass by value, address copy hua hai and fucntion mein ek naya pointer bana hai, ek aur pointer 4 bytes allocate hue hai.
    cout << ptr << endl;

    cout << *ptr << endl;
    incremet_value(ptr); // pass by value but i am go the that address and changeing that value
    cout << *ptr << endl;

    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "inside main: " << sizeof(a) << endl;
    cout << summ(a, 10) << endl; // 55
    cout << summ(a+3, 7) << endl; // 49 // passing part of array to a function
    return 0;
}