#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double

ll arr[60];

void init()
{
    ll x=1;
    for (ll i = 0; i < 60; i++){
        // arr[i] = x;

        // x*=2;

        arr[i]=pow(2,i);
    }
}
ll check(string x, string y)
{
    ll i = 0, j = 0, t = 0;
    while (i < x.length() && j < y.length())
    {
        if (x[i] == y[j]){
            i++;j++;t++;
        }
        else  i++;
    }
    return x.length() + y.length() - 2 * t;
}
void solve()
{
    ll n, m = INT_MAX;
    cin >> n;
    for (ll i = 0; i < 60; i++)
    {
        m = min(m, check(to_string(n), to_string(arr[i])));
    }
    cout << m << endl;
}

int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--)
    {
        init();
        solve();
    }

    return 0;
}
