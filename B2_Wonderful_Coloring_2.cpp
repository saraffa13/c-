#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    vector<ll>v;
    unordered_map<ll ,pair<ll,bool>>m;
    for(ll i=0; i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]].first++;
        m[arr[i]].second=true;
    }
    for(ll i=0; i<n;i++)
    {
        ll l=0;
        if(m[arr[i]].first>=k&&m[arr[i]].second!=false){
            for(ll j=0;l<k&&j<n;j++)
            {
                if(arr[i]==arr[j])
                m[arr[i]].second=false;
                v[i]=l++;
            }
        }
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
