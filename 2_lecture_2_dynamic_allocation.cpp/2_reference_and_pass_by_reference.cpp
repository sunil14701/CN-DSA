#include<iostream>
using namespace std;

void increment(int &s){
    s++; // same variable name as main's variable
}

int main(){
    int i = 10;
    int j = i;
    int &k = i; // reference variable
    cout << i << " " << j << " " << k << endl;
    i++;
    j++;
    k++;// alias to i. can change i variable    
    cout << i << " " << j << " " << k << endl;
    int l = 600;
    k = l;
    cout << i << " " << j << " " << k << " " << l << endl;

    int s = 10;
    cout << s << endl;
    increment(s);
    cout << s << endl;
    return 0;
}