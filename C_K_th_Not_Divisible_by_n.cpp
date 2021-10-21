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
     ll n,k;
     cin>>n>>k;
     if(k<n)
     {
         cout<<k<<endl;
         return;
     }
     k=k-(n-1);
     ll x=k/(n-1);
     x++;
     ll y=k%(n-1);
     if(y==0)
         cout<<n*x+y-1<<endl;
    else
         cout<<n*x+y<<endl;
     
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
