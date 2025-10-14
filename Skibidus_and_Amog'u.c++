#include <bits/stdc++.h>
using namespace std;
//This is solution hunting not problem solving
void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    string str2 = str.substr(0, n - 2);
    cout << str2 + "i" << endl;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
