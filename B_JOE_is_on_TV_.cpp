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
    ld n,sum=0;
    // scanf("%ld",&n);
    cin>>n;
    for(ll i=n;i>=1;i--)
    {
        sum+=(1.0/i);
    }
    cout<<sum<<endl;
    return;
    
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
