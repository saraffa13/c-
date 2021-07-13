#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
// #define 1e18 INT_MAX
void solve()
{
  ll a, b, x, y, n, res = 1e18;
  cin >> a >> b >> x >> y >> n;
  for (ll i = 0; i < 2; i++)
  {
    ll d1 = min(n, a - x);
    ll d2 = min(b - y, n - d1);
    res = min(res, (a - d1)* (b - d2));
    swap(a, b);
    swap(x, y);
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
