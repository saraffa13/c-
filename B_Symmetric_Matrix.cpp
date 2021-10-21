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
    ll n,m,x,y;
    cin>>n>>m;
    pair<ll,ll>p;
    n*=2;
    pair<ll,ll> arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
         p.first= x;
         p.second = y;
        arr[i]=p;     
    }
    if(m%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    for(ll i=0;i<n;i++)
    {
        pair<ll,ll>a,b;
        a=arr[i++];
        b=arr[i];
        if(symmetric(a,b))
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
