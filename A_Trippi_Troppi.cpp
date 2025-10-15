#include <bits/stdc++.h>
using namespace std;
//This is written by sabuj

void solve()
{
    string str;
    getline(cin, str);

    string str2;
    str2 += str[0];

    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            str2 += str[i + 1];
        }
    }

    cout << str2 << endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        solve();
    }

    return 0;
}
