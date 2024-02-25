#include <bits/stdc++.h>
using namespace std;


// farzi 
bool palindrome(string str, int start, int end)
{
    if (start == end)
        return true;
    if (str[start] != str[end])
        return false;  
    bool smallOuptut = palindrome(str, start + 1, end - 1);
    return smallOuptut;
}


// test 
// int test_palindrome(string str, int start, int end){
//     if(start > end) return 1;
//     if(str[start] != str[end]) return 0;
//     test_palindrome(str, start+1, end-1);
// }


int main()
{
    string str;
    cin >> str;

    bool ans = palindrome(str, 0, str.size() - 1);
    cout << ans << endl;

    // cout << test_palindrome(str, 0, str.size()-1) << endl;
    return 0;
}