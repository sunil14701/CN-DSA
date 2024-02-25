#include <bits/stdc++.h>
using namespace std;

int multiplication(int n, int m)
{
    if (m == 0 or n == 0)
        return 0;

    int smalloutput = multiplication(n, m - 1);
    return n + smalloutput;
}                 

int main()
{
    int n, m;
    cin >> n >> m;

    int ans = multiplication(n, m);
    cout << ans << endl;

    return 0;
}