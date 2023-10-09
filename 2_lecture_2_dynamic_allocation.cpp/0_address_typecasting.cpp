#include<iostream>
using namespace std;

int main(){
    int i= 65;
    char c = i;
    cout << c << endl;

    //what will happen
    int *p = &i;
    // char *pc = p;// error
    char *pc = (char *)p;
    float *pf = (float *)p;
    cout << p << " " << pc << " " << pf << endl; 
    cout << *p << " " << *pc << " " << *pf << endl; 

    // we are assuming 
    cout << *pc << endl;
    cout << *(pc+1) << endl;
    cout << *(pc+2) << endl;
    cout << *(pc+3) << endl;


    // explicit type conversion into int from char
    char c2 = 'A';
    char *pcc = &c2;
    cout << c2 << " " << &c2 << " " << pcc << endl; 

    int *pii = (int *)pcc;
    cout << pii << " " << *pii << endl;

    return 0;

}