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
// void inita(ll arr[][], ll n,ll m)
// {
//     for (ll i = 0; i < n; i++)
//      {
//          for (ll j = 0; j < m; j++)
//          {
//              cin>>arr[i][j];
//          }
//      }
// }

void solve()
{
    ll n,count=0;
    cin>>n;
    ll arr[n];
    unordered_map<ll,ll>m;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;

    }
    ll ans=0;
    for(auto x:m)
    {
        ans+=(x.second*(n-x.second));
    }
    cout<<ans<<endl;
    
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
