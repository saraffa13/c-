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
     ll n,count=0;
     cin>>n;
     ll arr[n];
     for(ll i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     ll x=arr[0],a=arr[0];
     for(ll i=0;i<n;i++)
     {
         arr[i]=arr[i]^x;
     }
     x=arr[0];
     for(ll i=0;i<n;i++)
     {
         x=x|arr[i];
     }
     cout<<a<<" "<<x<<endl;

     
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
