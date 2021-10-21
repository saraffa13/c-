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



void solve()
{
   ll n,m;
   cin>>n>>m;
   string s;
   cin>>s;
   string t="abc";
   vector<vector<ll>>v(6,vector<ll>(n+1));
   ll curr=0;
   do{
       for(ll i=0;i<n;i++)
       {
           v[curr][i+1]=v[curr][i] + (s[i]!=t[i%3]);
       }
        ++curr;

   }while(next_permutation(t.begin(),t.end()));
   while(m--){
       ll l,r;
       cin>>l>>r;
       ll ans = n ;
       for(ll i =0 ;i<6;i++)
       {
           ans = min(ans , v[i][r]-v[i][l-1]);
       }
       cout<<ans<<endl;
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
