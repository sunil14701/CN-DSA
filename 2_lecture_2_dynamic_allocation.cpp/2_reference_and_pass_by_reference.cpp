#include<iostream>
using namespace std;

int main(){
    int i = 10;
    int j = i;
    int &k = i;
    cout << i << " " << j << " " << k << endl;
    i++;
    j++;
    k++;// alias to i. can change i variable
    cout << i << " " << j << " " << k << endl;
    return 0;
}