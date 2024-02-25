#include<bits/stdc++.h>
using namespace std;

int sum_of_digits(int n){
    if(n==0) return 0;

    int smallOutput = sum_of_digits(n/10);
    return n%10 + smallOutput;
}

int main(){
    int n;
    cin >> n;

    int ans = sum_of_digits(n);
    cout << ans << endl;

    return 0;
}