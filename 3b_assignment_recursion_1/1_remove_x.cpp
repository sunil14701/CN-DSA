#include <bits/stdc++.h>
using namespace std;

void remove_x(string &str, int i = 0)
{
    if (i == str.size())
        return;

    remove_x(str, i + 1);
    if (str[i] == 'x')
    {
        for (int j = i; j < str.size() - 1; j++)
        {
            str[j] = str[j + 1];
        }
        str.resize(str.size() - 1);
    }
}

int main()
{

    string str;
    cin >> str;

    cout << "Before : " << str << endl;
    remove_x(str);
    cout << "After : " << str << endl;

    return 0;
}