#include<bits/stdc++.h>
using namespace std;

int fibo_series(int n){
    if(n == 0 or n==1) return n;

    int smalloutput = fibo_series(n-1) + fibo_series(n-2);
    return smalloutput;
}

int main(){
    // 0 1 2 3 4 5 6 7  8  9 10
    // 0 1 1 2 3 5 8 13 21 .  .

    // find nth fibonacci number
    int n;
    cin >> n;
    cout << fibo_series(n) << endl;
    return 0;
}