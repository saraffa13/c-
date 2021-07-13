#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
void solve()
{
    ll n, k = 1;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (n == 3)
    {
        cout << 2 << endl;
        return;
    }
    if (n % 3 != 0)
    {
        cout << "-1" << endl;
        return;
    }
    while (n > 1)
    {
        if (n % 6 == 0)
        {
            n = n / 6;
        }
        else
            n *= 2;
        if (n == 1)
        {
            cout << k << endl;
            return;
        }
        if (n == 3)
        {
            cout << k+2 << endl;
            return;
        }

        if (n % 3 != 0)
        {
            cout << "-1" << endl;
            return;
        }
        k++;
    }
    cout << k << endl;
}

int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
