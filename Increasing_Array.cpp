#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
#define MAX 1e5 + 0;

void init(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
}

void solve()
{
   ll n,res=0;
   cin>>n;
   ll arr[n];
   for(ll i=0;i<n;i++)
    cin>>arr[i];
   for(ll i=0;i<n-1;i++)
   {
       if(arr[i]>arr[i+1])
       {
           res+=arr[i]-arr[i+1];
           arr[i+1]=arr[i];
       }
   }
   cout<<res<<endl;
   
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
