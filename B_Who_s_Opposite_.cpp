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
     
   ll a,b,c,d;
   cin>>a>>b>>c;
   ll n=(2*abs(a-b));
   if(n<a||n<b||n<c)
   {
       cout<<-1<<endl;
       return ;

   }
   if(c-abs(a-b)>=1)
   {
       cout<<c-abs(a-b)<<endl;
       return;
   }
   if(c+abs(a-b)<=n)
   {
       cout<<c+abs(a-b)<<endl;
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
