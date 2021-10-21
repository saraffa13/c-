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
    ll n,sum=0;
    cin>>n;
    ll arr[n];
    unordered_map<ll ,ll >m;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    for(auto x:m)
    {
        sum=sum+ min(x.second,x.first-1);
    }
    cout<<sum<<endl;
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
