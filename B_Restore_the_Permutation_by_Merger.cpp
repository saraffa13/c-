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

bool symmetric(pair<ll,ll>p,pair<ll,ll>q)
{
    return (p.second==q.first);

}
void solve()
{
    ll n;
    cin>>n;
    ll arr[2*n];
    unordered_set<ll>s;
    for(ll i=0;i<2*n;i++)
    {
        cin>>arr[i];
    }
    for(ll i=0;i<2*n;i++)
    {
        if(s.find(arr[i])==s.end())
        {
            cout<<arr[i]<<" ";
            s.insert(arr[i]);
        }
    }
    cout<<endl;


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
