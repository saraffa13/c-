#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
ll sorty(string arr[], ll n, char e)
{
    vector<ll> brr;
    for (ll i = 0; i < n; i++)
    {
        ll c = count(arr[i].begin(), arr[i].end(), e);
        brr.push_back(c - (arr[i].length() - c));
    }
    sort(brr.begin(), brr.end(), greater<int>());
    for (ll i = 1; i < n; i++)
    {
        brr[i] = brr[i] + brr[i - 1];
    }
    ll res;
    if (brr[0] <= 0)
    {
        res = 0;
        return res;
    }
    if(brr[n-1]>0)
    {
        return n;
    }
    for (ll i = 1; i < n; i++)
    {
        res = i ;
        if (brr[i] <= 0)
        {
            break;
        }
        

    }
    return res;
}
void solve()
{
    ll n;
    cin >> n;
    string arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll mn = 0;
    mn=max(mn, sorty(arr, n, 'a'));
    mn=max(mn, sorty(arr, n, 'b'));
    mn=max(mn, sorty(arr, n, 'c'));
    mn=max(mn, sorty(arr, n, 'd'));
    mn=max(mn, sorty(arr, n, 'e'));
    cout<< mn << endl;
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
