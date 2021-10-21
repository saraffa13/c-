#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
#define MAX 1e5 + 1;

void init(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
}

void solve()
{
    ll W, H, x1, x2, y1, y2, w, h, res=INT_MAX;
    cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
    if (W < (x2 - x1 + w) && H < (y2 - y1 + h))
    {
        cout << -1 << endl;
        return;
    }
    for (ll i = 0; i < 2; i++)
    {

        if (H >= (y2 - y1 + h))
        {
            if (y1 >= h || H - y2 >= h)
            {
                cout << 0 << endl;
                return;
            }
            res=min(res,(min((h - (H - y2)), h - y1)));
        }
        // if (W >= (x2 - x1 + w))
        // {
        //     if (x1 >= w || W - x2 >= w)
        //     {
        //         cout << 0 << endl;
        //         return;
        //     }
        //     res=min(res,(min((h - (H - y2)), h - y1)));
        // }
        swap(W,H);
        swap(x1,y1);
        swap(x2,y2);
        swap(w,h);
    }
    cout<<res<<endl;
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
