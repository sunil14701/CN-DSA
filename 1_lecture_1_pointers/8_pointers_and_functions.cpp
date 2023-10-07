#include<iostream>
using namespace std;

void incremet_value(int *a){
    *a = *a + 1; // pointer ki value ko update karo
}

void increment_pointer(int *p){
    p = p+1;// pointer ko 4 byte se aage badio
}

int main(){
    int i= 10;
    int *ptr = &i;

    cout << ptr << endl;
    increment_pointer(ptr); // pass by value, address copy hua hai and fucntion mein ek naya pointer bana hai, ek aur pointer 4 bytes allocate hue hai.
    cout << ptr << endl;

    cout << *ptr << endl;
    incremet_value(ptr); // pass by value but i am go the that address and changeing that value
    cout << *ptr << endl;

    return 0;
}