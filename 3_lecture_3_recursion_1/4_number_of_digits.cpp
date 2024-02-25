#include <bits/stdc++.h>
using namespace std;

void cnt_digits(int &cnt, int n)
{
    if (n == 0)
        return;
    cnt++;
    cnt_digits(cnt, n / 10);
}

int cnt_digits_2(int n)
{
    if (n == 0)
        return 0;

    int smalloutput = cnt_digits_2(n / 10);
    return 1 + smalloutput;
}

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    cnt_digits(cnt, n);
    cout << cnt << endl;

    cout << cnt_digits_2(n) << endl;

    return 0;
}