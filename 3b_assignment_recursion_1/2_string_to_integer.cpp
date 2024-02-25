#include <bits/stdc++.h>
using namespace std;

int power(int base, int exp)
{
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

// int str_to_int(string str)
// {
//     if (str.size() == 1)
//         return str[0] - '0';
//     return (str[0] - '0') * power(10, str.size() - 1) + str_to_int(str.substr(1, str.size()));
// }

// two methods

// 12345 -> 1(me) + 2345(recursion)
// int str_to_int(string str)
// {
//     if (str.size() == 1)
//         return str[0] - '0';

//     int smalloutput = str_to_int(str.substr(1, str.size()));
//     return (str[0] - '0') * power(10, str.size() - 1) + smalloutput;
// }

// 12345 -> 1234(recursion) + 5(m1)
int str_to_int(string str)
{
    if (str.size() == 1)
        return str[str.size() - 1] - '0';

    int smalloutput = str_to_int(str.substr(0, str.size() - 1));
    return smalloutput * 10 + str[str.size() - 1] - '0';
}

int main()
{
    string str = "12345";
    cin >> str;

    cout << str << endl;
    long long int ans = str_to_int(str);
    cout << ans << endl;

    return 0;
}

// 1 2345