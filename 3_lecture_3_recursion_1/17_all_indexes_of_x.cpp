#include <bits/stdc++.h>
using namespace std;

// void find_all_indexes(int arr[], int n, int &x, int cnt ,vector<int> &vec){
//     if(n==0) return ;

//     if(arr[0] == x) vec.push_back(cnt);
//     find_all_indexes(arr+1, n-1, x,cnt+1,  vec);
// }

// storing ans using vector
// void find_all_indexes(int arr[], int n, int &x, vector<int> &vec)
// {
//     if (n == 0)
//         return;

//     find_all_indexes(arr + 1, n - 1, x, vec);
//     for (int i = 0; i < vec.size(); i++)
//         vec[i]++;
//     if (arr[0] == x)
//     {
//         vec.resize(vec.size() + 1);
//         for (int i = vec.size() - 2; i >= 0; i--)
//         {
//             vec[i + 1] = vec[i];
//         }
//         vec[0] = 0;
//     }
// }

// storing ans in array
int find_all_indexes(int arr[], int n, int x, int ans[]){
    if(n == 0) return 0;

    int ans_size = find_all_indexes(arr+1, n-1, x, ans);
    for(int i=0;i<ans_size;i++) ans[i]++;
    if(arr[0] == x) {
        ans_size++;
        for(int i=ans_size-2;i>=0;i--) ans[i+1] = ans[i];
        ans[0] = 0;
    }
    return ans_size;
}

int find_all_indexes_2(int arr[], int n, int x, int ans[])
{
    if (n == 0)
        return 0;

    int ans_size = find_all_indexes_2(arr, n - 1, x, ans);
    if (arr[n - 1] == x)
        ans[ans_size++] = n - 1;
    return ans_size;
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

    // vector<int> vec;
    // find_all_indexes(arr, n, x, vec);
    // for (auto it : vec)
    // {
    //     cout << it << " ";
    // }

    int *ans = new int[0];
    int ans_size = find_all_indexes(arr, n, x, ans);
    for (int i = 0; i < ans_size; i++)
    {
        cout <<ans[i] << " ";
    }
    cout << endl;
    return 0;
}