#include <bits/stdc++.h>
using namespace std;

int find_first_index(int arr[], int n, int x)
{
    if (n == 0)
        return -1;
    if (arr[0] == x)
        return 0;
    int small_output = find_first_index(arr + 1, n - 1, x);
    if (small_output == -1)
        return small_output;
    else
        return small_output + 1;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x;
    cin >> x;

    int ans = find_first_index(arr, n, x);
    cout << ans << endl;

    return 0;
}