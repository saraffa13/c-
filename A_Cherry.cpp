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
     ll n,m=0;
     cin>>n;
     ll arr[n];
     init(arr,n);
     ll maxi=INT_MIN;
     for(ll i=0;i<n-1;i++)
     {
         maxi=max(arr[i]*arr[i+1],maxi);

     }
     cout<<maxi<<endl;

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
