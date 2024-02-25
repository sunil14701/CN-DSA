#include <bits/stdc++.h>
using namespace std;

void print_recursively(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    print_recursively(i + 1, n );
}

void print_back_track(int n){
    if(n==0) return;

    print_back_track(n-1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    print_recursively(1, n);
    cout << endl;
    print_back_track(n);
    return 0;
}