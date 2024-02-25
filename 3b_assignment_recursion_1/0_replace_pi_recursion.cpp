#include <bits/stdc++.h>
using namespace std;

void replace_pi(string &ans, int i = 0)
{
    if (i == ans.size())
        return;
    if (ans[i] == 'p' and ans[i + 1] == 'i')
    {
        ans.resize(ans.size() + 2);
        for (int j = ans.size(); j >= i; j--)
        {
            ans[j + 2] = ans[j];
        }

        ans[i] = '3';
        ans[i + 1] = '.';
        ans[i + 2] = '1';
        ans[i + 3] = '4';
    }
    replace_pi(ans, i + 1);
}




int main()
{
    string ans = "";
    cin >> ans;

    cout << ans << endl;
    replace_pi(ans);
    cout << ans << endl;

    return 0;
}