#include <iostream>
using namespace std;

int find_last_index(int arr[], int n, int x)
{
    if (n == 0) return -1;

    int smalloutput = find_last_index(arr + 1, n - 1, x);// what i have done is i will give recursion a task to find the last index.and if it gives me -1 than means he was not able to find the element in the array so i will check that my first element is x or not if yes i will return it else i will return -1. tip: don't think about the code just think about the approch what will happen when recursion will give me the answer. what is my part in recursion
    if (smalloutput == -1){
        if(arr[0] == x) return 0;
        else return -1;
    }
    else
        return 1 + smalloutput;
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
    int ans = find_last_index(arr, n, x);
    cout << ans << endl;
    return 0;
}