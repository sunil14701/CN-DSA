#include<iostream>
using namespace std;

int main(){
    // pointer with any dataypes size remain same
    int *pi = NULL;
    double *pd = NULL;
    float *pf = NULL;
    bool *pb = NULL;
    // cout << sizeof(pi) << " " << sizeof(pd) << " " << sizeof(pf) << " " << sizeof(pb) << endl; 

    int i = 10;
    int *p = &i;    
    cout << p << endl;
    p++; // 4 bytes jump bcs of int datstype
    cout << p << endl;
    p--; // similary p = p-2
    cout << p << endl;
    return 0;
}