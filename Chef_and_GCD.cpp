#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double

void init(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
}

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x > y)
    {
        swap(x, y);
    }
    if (x == 1)
    {
        if (y % 2 == 0)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 2 << endl;
            return;
        }
    }
    if(__gcd(x,y)>1)
    {
        cout<<0<<endl;
        return;
    }
    else if(__gcd(x+1,y)>1)
    {
        cout<<1<<endl;
        return;
    }
    else if (__gcd(y+1,x)>1)
    {
        cout << 1 << endl;
        return;
    }
    cout<<2<<endl;
    return;
}

int main()
{
    IOS;
    // ll t=1;
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
