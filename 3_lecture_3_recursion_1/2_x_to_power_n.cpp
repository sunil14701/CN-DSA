#include<bits/stdc++.h>
using namespace std;

int power(int base, int pow){
    if(pow == 0) return 1;

    int smallOutput = power(base, pow-1);
    return base * smallOutput;
}

int main(){
    int x,n;
    cin >> x >> n ;
    cout << power(x, n) << endl;

    return 0;
}