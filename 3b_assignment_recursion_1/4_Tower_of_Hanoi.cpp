#include <bits/stdc++.h>
using namespace std;

void tower_of_honoi(int n, char a, char b, char c)
{
    if (n == 0)
        return;

    tower_of_honoi(n - 1, a, c, b);
    cout << a << " -> " << c << endl;
    tower_of_honoi(n - 1, b, a, c);
}

int main()
{
    int n;
    cin >> n;
    tower_of_honoi(n, 'A', 'B', 'C');

    return 0;
}