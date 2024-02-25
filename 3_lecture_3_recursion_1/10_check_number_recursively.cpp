#include <bits/stdc++.h>
using namespace std;


bool find_number(int arr[], int n, int x){
    if(n==0) return false;

    if(arr[0] == x) return true;
    int small_output = find_number(arr+1, n-1, x);
    return small_output;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int x;
    cin >> x;

    bool ans = find_number(arr, n, x);
    cout << ans << endl;
    return 0;
}