#include <bits/stdc++.h>
using namespace std;

int power(int base, int exp)
{
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

double gp(int k)
{
    if (k == 0)
        return 1;

    double smallOutput = gp(k - 1);
    return 1.0 / power(2, k) + smallOutput;
}

int main()
{
    int n;
    cin >> n;
    double ans = gp(n);
    cout << ans << endl;
    // cout << power(2, 5) << endl;
    return 0;
}