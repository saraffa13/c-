#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
void solve()
{
    ll a, b, res = 0;
    cin >> a >> b;
    ll bada = max(a, b);
    ll chhota = min(a, b);
    if ( bada == chhota || bada == chhota + 1)
    {
        cout << 2 * chhota / 3 << endl;
        return;
    }
    while (bada >= chhota&&bada>1&&chhota>0)
    {
        bada-=2;
        chhota-=1;
        res++;
        if(bada>chhota)
        swap(bada,chhota);
        if(bada==chhota)
        {
            res=res+2*chhota/3;
            cout<<res<<endl;
            return;
        }
    }
    cout << res << endl;
}

int32_t main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
