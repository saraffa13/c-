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
    if(n==3 or n==2)
    {
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    for(ll i=2;i<=n;i+=2)
    {
        cout<<i<<" ";
    }
    for(ll i=1;i<=n;i+=2)
    {
        cout<<i<<" ";
    }
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
