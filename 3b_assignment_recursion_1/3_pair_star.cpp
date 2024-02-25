#include <bits/stdc++.h>
using namespace std;

string separate_it(string str)
{
    if (str.size() == 1)
        return str;

    string smalloutput = separate_it(str.substr(1, str.size()));
    if (str[0] == smalloutput[0])
    {
        return str.substr(0, 1) + "*" + smalloutput;
    }
    return str.substr(0, 1) + smalloutput;
}


// why not working
// string separate_it(string str)
// {
//     if (str.size() == 1)
//         return str;

//     string smalloutput = separate_it(str.substr(1, str.size()));
//     if (str[0] == smalloutput[0])
//     {
//         return to_string(str[0]) + "*" + smalloutput;
//     }
//     return to_string(str[0])  + smalloutput;
// }

// farzi sol
// void separate_it(string &str, int i = 0)
// {
//     if (i == str.size())
//         return;
//     separate_it(str, i + 1);
//     if (str[i] == str[i + 1])
//     {
//         str.resize(str.size() + 1);
//         for (int j = str.size() - 2; j >= i; j--)
//         {
//             str[j + 1] = str[j];
//         }
//         str[i + 1] = '*';
//     }
// }

int main()
{
    string str = "hello";
    cin >> str;

    cout << "Before: " << str << endl;
    string ans = separate_it(str);
    cout << "After: " << ans << endl;

    return 0;
}