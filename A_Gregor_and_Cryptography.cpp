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
void solver (string s)
{
    ll l,r;
    cin>>l>>r;
    ll num=r-l+1;

    string req=s.substr(l-1,num);
    


}

void solve()
{
  ll n;
  cin>>n;
  if(n==6)
  {
      cout<<2<<" "<<3<<endl;
      return;
  }
  if(n%2==1)
  {
      cout<<n/2<<" "<<n-1<<endl;
      return;
  }
  else
  {
      cout<<(n-2)/2<<" "<<n-2<<endl;
      return;
  }
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
