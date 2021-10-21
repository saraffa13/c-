#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double


ll compare(ll arr[][6],ll count3,ll i ,ll j)
{

    ll count1 = 0, count2 = 0, l = 0, m = 0;
    for (ll k = 1; k <= 5; k++)
    {
        if (arr[i][k] < arr[j][k])
            count1++;
        if (arr[i][k] > arr[j][k])
            count2++;
    }
    if (count1 > count2)
        count3++;
    
}

void solve()
{
    ll n;
    cin >> n;
    ll arr[n + 1][6];
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    ll brr[n + 1][n + 1];
    ll county[n + 1];
    for (ll i = 1; i <= n; i++)
    {
        ll count3 = 0;
        for (ll j = 1; j <= n; j++)
        {
            if (j == i)
            {
                continue;
            }
            count3 = compare(arr,count3,i,j);
        }
        county[i] = count3;
    }
    bool resss = true;
    ll res1 = county[1], res2 = 1;
    for (ll i = 2; i <= n; i++)
    {
        if (county[i] > res1)
        {
            resss = true;
            res1 = county[i];
            res2 = i;
        }
        else if (county[i] == res1)
        {
            resss = false;
        }
    }
    // cout<<res1<<endl;
    if (resss == true)
        cout << res2 << endl;
    else
        cout << -1 << endl;
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
