#include <bits/stdc++.h>
using namespace std;

int cnt_zeros(int n)
{
    if(n < 10){
        if (n == 0) return 1;
        else return 0;
    }

    int smalloutput = cnt_zeros(n / 10);
    if (n % 10 == 0)
        return 1 + smalloutput;
    else return smalloutput;
}

int main()
{
    int n;
    cin >> n;
    int zeros = cnt_zeros(n);
    cout << zeros << endl;
    return 0;
}