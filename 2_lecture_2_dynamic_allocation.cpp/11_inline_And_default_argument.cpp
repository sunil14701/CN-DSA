#include <iostream>
using namespace std;

inline int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

int summ(int arr[], int n, int start = 0)
{
    int sum = 0;
    for (int i = start; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int num1, num2;
    // cin >> num1 >> num2;
    int mx;

    // m1
    // if (num1 > num2)
    //     mx = num1;
    // else
    //     mx = num2;

    // m2 by tertary operator
    mx = (num1 > num2) ? num1 : num2; // converting to a func as readilibity increases
    int mx2 = max(3, 7);
    cout << mx << " " << mx2 << endl;

    // default arguments
    // find array sum from a particualr index to particular index
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 5;
    int sum = summ(arr, size, start);
    int sum2 = summ(arr, size);
    cout << sum << " " << sum2 << endl;

    return 0;
}