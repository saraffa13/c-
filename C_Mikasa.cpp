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
     
   ll n,m,k=0,x=INT_MIN,sec=0,xo;
   cin>>n>>m;
   set<ll>s;

   for(ll i=0;i<=m;i++)
   {
       xo=n^i;

       s.insert(xo);
   }
   ll prev =-1;
   for(ll x:s)
   {
       if(x!=prev+1)
       {
           cout<<x<<endl;
           return;
       }
       prev=x;
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
