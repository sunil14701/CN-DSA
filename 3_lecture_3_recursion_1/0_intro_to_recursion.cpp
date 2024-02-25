#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1; // base case
    cout << n << endl;
    int smalloutput = factorial(n - 1); // assumption
    return n * smalloutput; // small work
}

int main()
{
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans << endl;
    return 0;
}
