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
    ll n,sum=0;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%n==0){
        cout<<0<<endl;
        return;
    }
    // if(sum<n)
    // {
    //     cout<<sum<<endl;
    //     return;
    // }
    ll a=(sum%n);
    ll b=n-a;
    cout<<a*b<<endl;


}

int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
