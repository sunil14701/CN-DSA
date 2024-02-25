#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


// without return value
void sum_array(int arr[], int n, int &sum)
{
    if (n == 0)
        return;

    sum += arr[0];
    sum_array(arr + 1, n - 1, sum);
}

// returing value
int sum_array_2(int arr[], int n, int sum){
    if(n==0) return sum;

    sum+= arr[0];
    int smalloutput = sum_array_2(arr+1, n-1, sum);
    return smalloutput;
}

// not using third variable
int sum_array_optimised(int arr[], int n){
    if(n==0) return 0;

    int smalloutput = sum_array_optimised(arr+1, n-1);
    return arr[0] + smalloutput;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    print_array(arr, n);

    int sum = 0;
    sum_array(arr, n, sum);
    cout << sum << endl;
    int sum2 = 0;
    cout << sum_array_2(arr, n, sum2) << endl;
    cout << sum_array_optimised(arr, n) << endl;
    return 0;
}