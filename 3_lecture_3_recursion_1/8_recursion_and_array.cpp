#include <bits/stdc++.h>
using namespace std;

bool is_sorted(int arr[], int size, int i)
{
    if (i == size - 1)
        return true;

    bool smalloutput = is_sorted(arr, size, i + 1);
    if (arr[i] > arr[i + 1])
        return false;
    return smalloutput;
}

bool is_sorted_optimised(int arr[], int size)
{
    if (size == 1)
        return true;

    bool smallOutput = is_sorted_optimised(arr, size - 1);
    if (arr[size] > arr[size + 1])
        return false;
    return smallOutput;
}

bool is_sorted_sir(int arr[], int size)
{
    if (size == 1)
        return true;

    bool smallOutput = is_sorted_sir(arr + 1, size - 1);
    if (arr[0] > arr[1])
        return false;
    return smallOutput;
}

int main()
{
    // int arr[7] = {3, 6, 1, 2, 8, 7, 9};
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << is_sorted(arr, size, 0) << endl;
    cout << is_sorted_optimised(arr, size - 2) << endl;
    cout << is_sorted_sir(arr, size) << endl;
    return 0;
}