#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
#define IN  9223372036854775807;

void init(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
}

void solve()
{
    ll n;
    cin>>n;
    if(n<=6){
        cout<<15<<endl;
        return;
    }
    if(n%2==0)
    {
        cout<<5*(n/2)<<endl;
        return;

    }
    else{
        cout<<5*(n/2+1)<<endl;
        return;
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
