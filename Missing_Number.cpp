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
   ll n;
   cin>>n;
   ll arr[n-1];
   ll total_sum=n*(n+1)/2,sum=0;
   for(ll i=0;i<n-1;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
   }
   cout<<total_sum-sum<<endl;

}

int main()
{
    IOS;
    ll t=1;
    // ll t;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
