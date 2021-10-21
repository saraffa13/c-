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
   string s;
   cin>>s;
   ll count=0,val=INT_MIN;
   for(ll i=0;i<s.length();i++)
   {
       if(s[i]=='A')
       {
           count++;    
           val=max(count,val); 
       }
       else{
           count=0;
       }
   }
   count=0;
   for(ll i=0;i<s.length();i++)
   {
       if(s[i]=='T')
       {
           count++;    
           val=max(count,val); 
       }
       else{
           count=0;
       }
   }
   count=0;
   for(ll i=0;i<s.length();i++)
   {
       if(s[i]=='G')
       {
           count++;    
           val=max(count,val); 
       }
       else{
           count=0;
       }
   }
   count=0;
   for(ll i=0;i<s.length();i++)
   {
       if(s[i]=='C')
       {
           count++;    
           val=max(count,val); 
       }
       else{
           count=0;
       }
   }
   cout<<val<<endl;

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
