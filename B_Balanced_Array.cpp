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
     ll n,sum=0,sum2=0;
     cin>>n;
     if((n/2)%2==1)
     {
         cout<<"NO"<<endl;
         return;
     }
     cout<<"YES"<<endl;
     for(ll i=1;i<=n/2;i++){
         cout<<i*2<<" ";
         sum+=(i*2);
     }
     for(ll i=1;i<=(n-1)/2;i++){
         cout<<i*2-1<<" ";
        sum2+=(i*2-1);
     }
     cout<<sum-sum2<<endl;


     
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
